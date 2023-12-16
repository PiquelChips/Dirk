// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractComponent.h"

// Called when the game starts
void UInteractComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register overlap events
	OnComponentBeginOverlap.AddDynamic(this, &UInteractComponent::OnSphereBeginOverlap);
	OnComponentEndOverlap.AddDynamic(this, &UInteractComponent::OnSphereEndOverlap);
}

// Interactd when actor overlaps with the component
void UInteractComponent::OnSphereBeginOverlap(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* InteractingActor, 
	UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult
)
{
	// Checks if component can interact and if the interacting actor is valid
	if (InteractingActor->IsA(TriggerClass) && bIsInteractable)
	{
		// Sets interacting actor class variable
		OtherActor = InteractingActor;
		// Checks if component needs input
		if (bRequireInput)
		{
			// Bind Action
			if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InteractingActor->InputComponent))
			{
				// Saves binding handle to be able to unbind the action later on
				BindingHandle = EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &UInteractComponent::Interact).GetHandle();
			}
		}
		// Imediatly interacts if input is not needed
		else { Interact(); }
	}
}

// Called when actor leaves the sphere are
void UInteractComponent::OnSphereEndOverlap(
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
void UInteractComponent::Interact()
{
	// Checks if component interaction is activated
	if (bIsInteractable)
		//Notify that the actor is being intercated with
		OnInteract.Broadcast(OtherActor);
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

// Sets the IsInteractable variable to true
void UInteractComponent::SetInteractable(bool bCanInteract) noexcept { bIsInteractable = bCanInteract; }