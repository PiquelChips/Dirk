// Fill out your copyright notice in the Description page of Project Settings.

#include "DirkItem.h"

// Constructor
ADirkItem::ADirkItem() 
{ 
    // Setup components

    // Interact component
    InteractComponent = CreateDefaultSubobject<UInteractComponent>(TEXT("InteractComponent"));

    // Mesh component
    MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));

    // Register OnInteract Event
    InteractComponent->OnInteract.AddDynamic(this, &ADirkItem::OnPickUp);
    PrimaryActorTick.bCanEverTick = false; 
}

// Called when item is interacted with (picked up)
void ADirkItem::OnPickUp(ADirkActor* OtherActor)
{
    // Checks of other actor is a DirkCharacter
    if (Cast<ADirkCharacter>(OtherActor))
    {
        Character = Cast<ADirkCharacter>(OtherActor);
        // Check is the character has already has an item
        if (!Character->GetHasItem())
        {
            // Attach this actor to Character
            FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
            AttachToComponent(Character->GetMeshComponent(), AttachmentRules, FName(TEXT("GripPoint")));
            // Sets this actor's owner to be the character that picked it up
            SetOwner(Character);

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
                    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("INPUT MAPPING ADDED"));
                }

                // Checks if using Enhanced input component
                if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
                {
                    // Use action
                    UseBindingHandle = EnhancedInputComponent->BindAction(UseAction, ETriggerEvent::Triggered, this, &ADirkItem::Use).GetHandle();
                    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("USE ACTION BINDED"));
                    // Drop action
                    DropBindingHandle = EnhancedInputComponent->BindAction(DropAction, ETriggerEvent::Triggered, this, &ADirkItem::Drop).GetHandle();
                    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("DROP ACTION BINDED"));
                }
            }

            // UnBind Actions, checks if Interacting actor and BindingHandle actually exist
            if ((Character != nullptr) && InteractComponent->BindingHandle)
                // Checks if using EnhancedInput Component
                if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(Character->InputComponent))
                    EnhancedInputComponent->RemoveBindingByHandle(InteractComponent->BindingHandle);
        }
    }
}

/*// Called when item is used
void ADirkItem::Use()
{
    // TODO: write some default implementation or figure out if can make it abstract
}*/

// Drops the item
void ADirkItem::Drop()
{
    // Tell Character it no longer has an item 
    Character->SetHasItem(false);

    // Handle server actor destruction and respawning
    if (!HasAuthority()) { Server_Drop(); }
    else
    {
        // Respawn new actor
        Respawn();
        // Destroy this Actor
        Destroy();
    }
}

// Server drop RPC

// Server validation
bool ADirkItem::Server_Drop_Validate() { return true; }
// Server drop implementaion
void ADirkItem::Server_Drop_Implementation()
{
    // Respanw new actor
    Respawn();
    // Destroy this actor
    Destroy();
}

// Respawn actor from specified class
void ADirkItem::Respawn()
{
    // Gets the current world
    UWorld* World = GetWorld();
    // Checks if world and class to spawn are specified
    if ((World != nullptr) && (RespawnClass != nullptr))
    {
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
}

// Called when actor is destroyed play
void ADirkItem::EndPlay(const EEndPlayReason::Type EndPlayReason)
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
