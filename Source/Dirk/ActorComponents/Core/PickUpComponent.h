// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "InteractComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"

#include "PickUpComponent.generated.h"

// Declaration of the delegate that will be called when someone picks this up
// The character picking this up is the parameter sent with the notification
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUse, ADirkCharacter*, Character);

UCLASS( ClassGroup=(ActorComponent), meta=(BlueprintSpawnableComponent) )
class DIRK_API UPickUpComponent : public UInteractComponent
{
	GENERATED_BODY()

public:

	// Fires on use
	UPROPERTY(BlueprintAssignable)
	FOnUse OnUse;
	
	// Sound to play when picked up
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Audio")
	USoundBase* PickUpSound;

	UPickUpComponent();

protected:

	// Called when the game starts
	UFUNCTION()
	virtual void BeginPlay() override;

	// Calles when actor ends play
	UFUNCTION()
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Called when the Actor is interacted with
	UFUNCTION()
	void OnPickUp(AActor* OtherActor);
	
	// should delay interactability
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShouldDelayCanInteract = true;

	// Time before can pickup
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeBeforePickupable = 2.f;

private:
	// MappingContext
	UPROPERTY(EditAnywhere, Category="PickUp/Drop")
	UInputMappingContext* UseMappingContext;

	// Use Input Action
	UPROPERTY(EditAnywhere, Category="PickUp/Drop")
	UInputAction* UseAction;

	// Drop Input Action
	UPROPERTY(EditAnywhere, Category="PickUp/Drop")
	UInputAction* DropAction;

	// Static class to spawn on drop
	UPROPERTY(EditAnywhere, Category="PickUp/Drop")
	UClass* RespawnClass;

	// Character holding item
	ADirkCharacter* Character;
	
	// Fired when Use key is pressed
	void Use();

	// Fired when drop key is pressed
	void Drop();

	// Respawns new version
	void Respawn();

	// Unbinds drop and use actions
	void UnbindActions();

	// Fired when drop key is pressed
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Drop();
	bool Server_Drop_Validate();
	void Server_Drop_Implementation();
	
	// Input Binding Handles
	UPROPERTY()
	uint32 UseBindingHandle;
	UPROPERTY()
	uint32 DropBindingHandle;

	// Handle for Pickup-timer
	FTimerHandle PickupTimerHandle;

	// Called by timer
	void TimerEnd();
};
