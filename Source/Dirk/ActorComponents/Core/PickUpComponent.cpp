// Fill out your copyright notice in the Description page of Project Settings.

#include "PickUpComponent.h"

// Constructor
//UPickUpComponent::UPickUpComponent() { PrimaryComponentTick.bCanEverTick = true; }

// Fired when spawned into world
void UPickUpComponent::BeginPlay()
{
    Super::BeginPlay();

    // Checks if interactability should be delayed, prevents automatic interaction after creation (repeated drop/pickup cycle)
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

// Called when interactability timer ends
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
        // Defines class Owning character variable
        Character = Cast<ADirkCharacter>(InteractingActor);

        // Attaches weapon if character doesnt have any
        if (!Character->GetHasItem())
        {
            // Attach this actor to Character
            FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
            AttachToComponent(Character->GetMeshComponent(), AttachmentRules, FName(TEXT("GripPoint")));
            // Sets this components owner to be the character that picked it up
            GetOwner()->SetOwner(Character);
            GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, GetOwner()->GetOwner()->GetName());

            // Tell Character that it has an item
            Character->SetHasItem(true);

            // Set up action bindings
            if (APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
            {
                // Checks if using Enhanced input component
                if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
                {
                    // Set the priority of the action mapping
                    Subsystem->AddMappingContext(UseMappingContext, 1);
                }

                // Checks if using Enhanced input component
                if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
                {
                    // Use action
                    UseBindingHandle = EnhancedInputComponent->BindAction(UseAction, ETriggerEvent::Triggered, this, &UPickUpComponent::Use).GetHandle();
                    // Drop action
                    DropBindingHandle = EnhancedInputComponent->BindAction(DropAction, ETriggerEvent::Triggered, this, &UPickUpComponent::Drop).GetHandle();
                }
            }
            
            // UnBind Actions, checks if Interacting actor and BindingHandle actually exist
            if (Cast<ADirkCharacter>(InteractingActor) != nullptr && BindingHandle)
                // Checks if using EnhancedInput Component
                if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(Character->InputComponent))
                    EnhancedInputComponent->RemoveBindingByHandle(BindingHandle);

            // Attemps to play sound on pickup
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

// Drop Server RPC

// Server Validation
bool UPickUpComponent::Server_Drop_Validate() { return true; }
// Server drop function implementation
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
    // Gets the current world
    UWorld* World = GetWorld();
    // Checks if world and class to spawn are specified
    if ((World != nullptr) && (RespawnClass != nullptr))
        // Chack if player controller is valid
        if (APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
        {
            // Gets Rotation of for new actor
            const FRotator Rotation = PlayerController->PlayerCameraManager->GetCameraRotation();
            // Get Location of new actor
            FVector Location = Character->GetActorLocation();
            // Adjust location of actor to be on floor
            Location.Z -= Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
            Location.Z += 50;

            // Spawn the actor
            AActor* NewActor = World->SpawnActor<AActor>(RespawnClass, Location, Rotation);
            // Removes owner from actor so it can be picked up by other player
            NewActor->SetOwner(nullptr);
        }
}

// Called when actor is destroyed play
void UPickUpComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    
    // Remove all timers associated with this obj
    GetWorld()->GetTimerManager().ClearAllTimersForObject(this);

    // Unbind Actions
    if (Cast<ADirkCharacter>(Character) != nullptr)
    {
        // Checks if using enhanced input component
        if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(Character->InputComponent))
        {
            // Use Action if BindingHandle is valid
            if (UseBindingHandle) { EnhancedInputComponent->RemoveBindingByHandle(UseBindingHandle); }
            // Drop Action if BindingHandle is valid
            if (DropBindingHandle) { EnhancedInputComponent->RemoveBindingByHandle(DropBindingHandle); }
        }
    }
}