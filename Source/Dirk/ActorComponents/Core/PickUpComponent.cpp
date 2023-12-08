// Fill out your copyright notice in the Description page of Project Settings.

#include "PickUpComponent.h"

// Constructor
UPickUpComponent::UPickUpComponent() { PrimaryComponentTick.bCanEverTick = true; }

// Fired when spawned into world
void UPickUpComponent::BeginPlay()
{
    Super::BeginPlay();

    if (bShouldDelayCanInteract)
    { 
        // Set not interactable
        SetInteractable(false);
        // Start timer to interactable
        GetWorld()->GetTimerManager().SetTimer(PickupTimerHandle, this, &UPickUpComponent::TimerEnd, TimeBeforePickupable, false);
    }   
    else
    {
        // Registers OnPickUp event
        OnInteract.AddDynamic(this, &UPickUpComponent::OnPickUp);
    }   
}

void UPickUpComponent::TimerEnd() 
{
    // Tells obj it can be interacted with
    SetInteractable(true);
    // Registers OnPickUp event
    OnInteract.AddDynamic(this, &UPickUpComponent::OnPickUp);
}

// Pick Up the actor
void UPickUpComponent::OnPickUp(AActor* InteractingActor)
{
    // Check that interacting actor is not nullptr && is instance of DirkCharacter
    if (Cast<ADirkCharacter>(InteractingActor) != nullptr && InteractingActor != nullptr)
    {
        Character = Cast<ADirkCharacter>(InteractingActor);

        if (!Character->bHasItem)
        {
            // Attach this actor to Character
            FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
            AttachToComponent(Character->GetMeshComponent(), AttachmentRules, FName(TEXT("GripPoint")));
            GetOwner()->SetOwner(Character);

            // Tell Character that it has an item
            Character->SetHasItem(true);

            // Set up action bindings
            if (APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
            {
                if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
                {
                    // Set the priority of the action mapping
                    Subsystem->AddMappingContext(UseMappingContext, 1);
                }

                if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
                {
                    // Use action
                    UseBindingHandle = EnhancedInputComponent->BindAction(UseAction, ETriggerEvent::Triggered, this, &UPickUpComponent::Use).GetHandle();
                    // Drop action
                    DropBindingHandle = EnhancedInputComponent->BindAction(DropAction, ETriggerEvent::Triggered, this, &UPickUpComponent::Drop).GetHandle();
                }
            }
            
            // UnBind Actions
            if (Cast<ADirkCharacter>(InteractingActor) != nullptr)
                if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(Character->InputComponent))
                    if (BindingHandle)
                        EnhancedInputComponent->RemoveBindingByHandle(BindingHandle);

            if (Character->GetController() != nullptr)
            {   
                // Try and play sound if one is specified
                if (PickUpSound != nullptr) { UGameplayStatics::PlaySoundAtLocation(this, PickUpSound, Character->GetActorLocation()); }
            }
        }

    }
}

// BroadCast Use Event
void UPickUpComponent::Use() { OnUse.Broadcast(Character); }

bool UPickUpComponent::Server_Drop_Validate() { return true; }
void UPickUpComponent::Server_Drop_Implementation()
{ 
    // Tell Character it no longer has an Item
    Character->SetHasItem(false);
    // Respawn new actor
    Respawn();
    // Destroy this Actor
    GetOwner()->Destroy();
}

// Fired when drop key is pressed
void UPickUpComponent::Drop()
{
    // Tell Character it no longer has an Item
    Character->SetHasItem(false);

    // Handle actor destruction and respawn
    if (!GetOwner()->HasAuthority()) { Server_Drop(); }
    else 
    {
        // Respawn new actor
        Respawn();
        // Destroy this Actor
        GetOwner()->Destroy();
    }
}

// Respawn this actor
void UPickUpComponent::Respawn()
{
    UWorld* World = GetWorld();
    if ((World != nullptr) && (RespawnClass != nullptr))
    {
        APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
        const FRotator Rotation = PlayerController->PlayerCameraManager->GetCameraRotation();
        FVector Location = Character->GetActorLocation();
        Location.Z -= Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
        Location.Z += 50;

        // Spawn the actor
        AActor* NewActor = World->SpawnActor<AActor>(RespawnClass, Location, Rotation);
        NewActor->SetOwner(nullptr);
    }
}

// Called when actor ends play
void UPickUpComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    
    // Remove all timers associated with this obj
    GetWorld()->GetTimerManager().ClearAllTimersForObject(this);

    // Unbind Actions
    if (Cast<ADirkCharacter>(Character) != nullptr)
    {
        if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(Character->InputComponent))
        {
            // Use Action
            if (UseBindingHandle) { EnhancedInputComponent->RemoveBindingByHandle(UseBindingHandle); }
            // Drop Action
            if (DropBindingHandle) { EnhancedInputComponent->RemoveBindingByHandle(DropBindingHandle); }
        }
    }
}