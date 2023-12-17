// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/SphereComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/GameplayStatics.h"
#include "../../Core/DirkCharacter.h"
#include "UObject/ObjectMacros.h"

#include "InteractComponent.generated.h"

// Declaration of the delegate that will be called when someone picks this up
// The character picking this up is the parameter sent with the notification
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteract, AActor*, InteractingCharacter);

UCLASS( ClassGroup=(ActorComponent), meta=(BlueprintSpawnableComponent) )
class DIRK_API UInteractComponent : public USphereComponent
{
	GENERATED_BODY()

public:

	// Fires on interaction
	UPROPERTY(BlueprintAssignable)
	FOnInteract OnInteract;

protected:

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Can the actor be interacted with multiple times
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interaction")
	bool bDoesInteractRepeat = false;

	// Set if actor can be interacted with
	UFUNCTION(BlueprintCallable)
	void SetInteractable(bool bCanInteract) noexcept;

	// Interaction Input action (not required if Require Input is false)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category="Interaction")
	UInputAction* InteractAction;
	
	// Sound to play when interacted
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Audio")
	USoundBase* InteractSound;
	
	// Input
	
	// Interaction Type 
	UPROPERTY(EditAnywhere, Category="Interaction")
	bool bRequireInput = false;
	// Input Binding Handle
	uint32 BindingHandle;
	
private:

	// Code executed when something overlaps
	UFUNCTION()
	void OnSphereBeginOverlap(
		UPrimitiveComponent* OverlappedComponent, 
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, 
		bool bFromSweep, 
		const FHitResult& SweepResult
	);
	// Code executed when something stops overlaping
	UFUNCTION()
	void OnSphereEndOverlap(
		class UPrimitiveComponent* OverlappedComp, 
		class AActor* OtherActor, 
		class UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex
	);

	// Can actor be interacted with
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category="Interaction")
	bool bIsInteractable = true;

	// Called on interact
	void Interact();

	// Interacting actor
	AActor* OtherActor;

	// Trigger Class
	UPROPERTY(EditAnywhere, Category="Interaction")
	UClass* TriggerClass = ADirkCharacter::StaticClass();

};
