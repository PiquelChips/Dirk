// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "UObject/ObjectMacros.h"

// Sets default values for this component's properties
UInteractComponent::UInteractComponent() {}

// Called when the game starts
void UInteractComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register overlap event
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
	if(InteractingActor->IsA(TriggerClass) && bIsInteractable)
	{
		OtherActor = InteractingActor;

		if (bRequireInput)
		{
			// Bind Action
			if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InteractingActor->InputComponent))
			{
				BindingHandle = EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &UInteractComponent::Interact).GetHandle();
			}
		}
		else { Interact(); }
	}
}

void UInteractComponent::OnSphereEndOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* InteractingActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex
	)
{
	// UnBind Actions
	if(Cast<ADirkCharacter>(InteractingActor) != nullptr)
		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InteractingActor->InputComponent))
			if(BindingHandle)
				EnhancedInputComponent->RemoveBindingByHandle(BindingHandle);
}

// Interacts the OnInteract event
void UInteractComponent::Interact()
{
	if(bIsInteractable)
		//Notify that the actor is being intercated with
		OnInteract.Broadcast(OtherActor);
		ADirkCharacter* DirkCharacter = Cast<ADirkCharacter>(OtherActor);
		if (DirkCharacter->GetController() != nullptr)
		{
			// Try and play sound if one is specified
			if (InteractSound != nullptr)
				UGameplayStatics::PlaySoundAtLocation(this, InteractSound, DirkCharacter->GetActorLocation());
		}
		if(!bDoesInteractRepeat)
			bIsInteractable = !bIsInteractable;
	
}

void UInteractComponent::SetInteractable(bool bCanInteract) noexcept { bIsInteractable = bCanInteract; }