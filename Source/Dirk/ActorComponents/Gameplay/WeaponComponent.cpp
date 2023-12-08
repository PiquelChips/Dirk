// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponComponent.h"

// Set that actor can tick
UWeaponComponent::UWeaponComponent() { PrimaryComponentTick.bCanEverTick = true; }

// Fired when game starts
void UWeaponComponent::BeginPlay()
{
    Super::BeginPlay();

    // Register events
    OnUse.AddDynamic(this, &UWeaponComponent::Fire);

    // Set tick and cooldown
    SetComponentTickEnabled(false);
    CooldownCurrent = Cooldown;
}

// Called on weapon use event
void UWeaponComponent::Fire(ADirkCharacter* DirkCharacter)
{
    if (!GetOwner()->HasAuthority()) { Server_Fire(DirkCharacter); }
    else { Fire_Implementation(DirkCharacter); }
}

// Fire Server RPC
bool UWeaponComponent::Server_Fire_Validate(ADirkCharacter* DirkCharacter) { return true; }
void UWeaponComponent::Server_Fire_Implementation(ADirkCharacter* DirkCharacter) { Fire_Implementation(DirkCharacter); }

// Actually Fires Gun
void UWeaponComponent::Fire_Implementation(ADirkCharacter* DirkCharacter)
{
    // Try and fire projectile
    UWorld* const World = GetWorld();
    if ((DirkCharacter->GetController() != nullptr) && (ProjectileClass != nullptr) && (World != nullptr) && (!bCooldown))
    {
        APlayerController* PlayerController = Cast<APlayerController>(DirkCharacter->GetController());
        const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
        // MuzzleOffset is in camera space, so transform it to world space before offsetting from the DirkCharacter location to find the final muzzle position
        const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(Offset);
                    
        // Set Spwan Collision handling Override
        FActorSpawnParameters ActorSpawnParams;
        ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

        // Spawn the projectile at the Muzzle
        ADirkProjectile* Projectile = World->SpawnActor<ADirkProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
        if (GetOwner()->HasAuthority())
        Multi_Fire();

        // Start and sets cooldown
        bCooldown = true;
        CooldownCurrent = Cooldown;
        SetComponentTickEnabled(true);
    }
}

// Fire Multicast

bool UWeaponComponent::Multi_Fire_Validate() { return true; }

void UWeaponComponent::Multi_Fire_Implementation()
{
    // Try and play firing animation if specified
    if (FireAnimation != nullptr)
    {
        // Get the animation objetc for the arms mesh
        UAnimInstance* AnimInstance = Cast<ADirkCharacter>(GetOwner()->GetOwner())->GetMeshComponent()->GetAnimInstance();
        if (AnimInstance != nullptr)
            if (AnimInstance->Montage_Play(FireAnimation, 1.f) == 0.f)
                GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Anim"));
    }
    // Try and play sound if one is specified
    if (FireSound != nullptr)
        UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetOwner()->GetActorLocation(), GetOwner()->GetActorRotation());
}

// Updates cooldown on tick
void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // Set Current cooldown
    if (bCooldown)
    {
        CooldownCurrent -= DeltaTime;
        GEngine->AddOnScreenDebugMessage(-10, 1.f, FColor::Yellow, FString::Printf(TEXT("%f"), CooldownCurrent));
    }
    // Checks if cooldown is over
    if (CooldownCurrent <= 0.f)
    {
        // stops the cooldown
        bCooldown = false;
        SetComponentTickEnabled(false);
    }
}