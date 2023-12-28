// Fill out your copyright notice in the Description page of Project Settings.

#include "DirkProjectileWeapon.h"

// Set that the actor can tick and sets up components
ADirkProjectileWeapon::ADirkProjectileWeapon()
{
    // Set that actor can tick
    PrimaryActorTick.bCanEverTick = true;

    // Create actor components

    // Arrow Component
    ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
}

// Fired when actors enters tha game
void ADirkProjectileWeapon::BeginPlay()
{
    Super::BeginPlay();

    // Set tick and cooldown
    SetActorTickEnabled(false);
}

// Called when weapon is used
void ADirkProjectileWeapon::Use()
{
    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("USE ACTION TRIGGERED"));
    if (!GetOwner()->HasAuthority()) { Server_Fire(); }
    else { Fire_Implementation(); }
}

// Server fire RPC

// Server validation
bool ADirkProjectileWeapon::Server_Fire_Validate() { return true; }
// Fires the classes implementation method
void ADirkProjectileWeapon::Server_Fire_Implementation() { Fire_Implementation(); }

// Actually Fires weapon
void ADirkProjectileWeapon::Fire_Implementation()
{
    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("FIRE"));
    // Try and fire projectile
    UWorld* const World = GetWorld();
    if ((Character->GetController() != nullptr) && (ProjectileClass != nullptr) && (World != nullptr) && (!bCooldown))
    {
        // Set spawn collision handling override
        FActorSpawnParameters ActorSpawnParams;
        ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        
        // Spawn the projectile at the arrow component location
        World->SpawnActor<ADirkActor>(ProjectileClass, ArrowComponent->GetComponentLocation(), ArrowComponent->GetComponentRotation(), ActorSpawnParams);
        // Play effects
        Multi_Fire();

        // Starts and sets cooldown
        bCooldown = true;
        CooldownCurrent = Cooldown;
        SetActorTickEnabled(true);
    }
}

// Fire net multicast

// Server validation
bool ADirkProjectileWeapon::Multi_Fire_Validate() { return true; }

// Plays sound, animation and particles
void ADirkProjectileWeapon::Multi_Fire_Implementation()
{
    // Try and play firing animation if specified
    if (FireAnimation != nullptr)
        // Get the animation object for character mesh
        if (UAnimInstance* AnimInstance = Cast<ADirkCharacter>(GetOwner())->GetMeshComponent()->GetAnimInstance())
            AnimInstance->Montage_Play(FireAnimation, 1.f);

    // Try and play sound if specified
    if (FireSound != nullptr)
    {
        // Play sound at arrow component
        UGameplayStatics::PlaySoundAtLocation(this, FireSound, ArrowComponent->GetComponentLocation(), GetOwner()->GetActorRotation());
    }
    
    // Try and play particles if specified
    if (ParticleEffect != nullptr)
    {
        // Play particle effect at arrow component
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, ParticleEffect, ArrowComponent->GetComponentLocation(), GetOwner()->GetActorRotation());
    }
}

// Updates cooldown on tick
void ADirkProjectileWeapon::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Set current cooldown
    if (bCooldown)
        CooldownCurrent -= DeltaTime;
    // CHecks if cooldown is over
    if (CooldownCurrent <= 0.f)
    {
        // Stops cooldown
        bCooldown = false;
        SetActorTickEnabled(false);
    }
}