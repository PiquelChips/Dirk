// Fill out your copyright notice in the Description page of Project Settings.

#include "DirkInteractComponent.h"

#include "../Actors/DirkItem.h"
#include "../Actors/DirkTeleporter.h"

// Called when the game starts
void UDirkInteractComponent::BeginPlay()
{
	Super::BeginPlay();

    // Checks if interactability should be delayed, prevents automatic interaction after creation (repeated drop/pickup cycle)
    if (bShouldDelayCanInteract)
    { 
        // Set not interactable
        SetInteractable(false);
        // Start timer to interactable
        GetWorld()->GetTimerManager().SetTimer(PickupTimerHandle, this, &UDirkInteractComponent::TimerEnd, TimeBeforePickupable, false);
    }
    else
    {
		// Register overlap events
		OnComponentBeginOverlap.AddDynamic(this, &UDirkInteractComponent::OnBoxBeginOverlap);
		OnComponentEndOverlap.AddDynamic(this, &UDirkInteractComponent::OnBoxEndOverlap);
    }
}

// Called when interactability timer ends
void UDirkInteractComponent::TimerEnd() 
{
    // Tells obj it can be interacted with
    SetInteractable(true);
	// Register overlap events
	OnComponentBeginOverlap.AddDynamic(this, &UDirkInteractComponent::OnBoxBeginOverlap);
	OnComponentEndOverlap.AddDynamic(this, &UDirkInteractComponent::OnBoxEndOverlap);
}

// Interactd when actor overlaps with the component
void UDirkInteractComponent::OnBoxBeginOverlap(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* InteractingActor, 
	UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult
)
{
	// Checks if component can interact and  the interacting actor is valid
	if (InteractingActor->IsA(TriggerClass) && bIsInteractable)
	{
		// Assign Class OtherActor Variable
		OtherActor = InteractingActor;
		// Checks if component needs input
		if (bRequireInput)
		{
			// Bind Action
			if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(OtherActor->InputComponent))
			{
				// Saves binding handle to be able to unbind the action later on
				BindingHandle = EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &UDirkInteractComponent::Interact).GetHandle();
			}
		}
		// Imediatly interacts if input is not needed
		else { Interact(); }
	}
}

// Called when actor leaves the Box are
void UDirkInteractComponent::OnBoxEndOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* InteractingActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex
	)
{
	// UnBind Actions, checks if interacting actor and binding handle are valid
	if ((Cast<ADirkCharacter>(InteractingActor) != nullptr) && (BindingHandle))
		// Checks if enhanced input component is being used by the interacting actor
		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InteractingActor->InputComponent))
			// Unbinds action with binding handle
			EnhancedInputComponent->RemoveBindingByHandle(BindingHandle);
}

// Called by the OnInteract event
void UDirkInteractComponent::Interact()
{
	// Check if owner is a DirkItem
	if (ADirkItem* DirkItem = Cast<ADirkItem>(GetOwner()))
	{
		// Call DirkItem pickup function
		DirkItem->PickUp(OtherActor);
	}
	else if (ADirkTeleporter* Teleporter = Cast<ADirkTeleporter>(GetOwner()))
	{
		// Call teleporter's teleport function
		Teleporter->Server_Teleport(OtherActor);
	}
	else
	{
		//Notify that the actor is being intercated with
		OnInteract.Broadcast(OtherActor);
	}
	// Checks if interacting actor is a DirkCharacter
	if (ADirkCharacter* DirkCharacter = Cast<ADirkCharacter>(OtherActor))
		// Checks if character has player controller
		if (DirkCharacter->GetController() != nullptr)
		{
			// Try and play sound if one is specified
			if (InteractSound != nullptr)
				UGameplayStatics::PlaySoundAtLocation(this, InteractSound, DirkCharacter->GetActorLocation());
		}

	// Checks if interaction is repeatable
	if (!bDoesInteractRepeat)
		bIsInteractable = !bIsInteractable;	
}