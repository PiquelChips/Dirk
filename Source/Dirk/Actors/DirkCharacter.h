// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputSubsystems.h"
#include "UObject/UObjectGlobals.h"

#include "DirkCharacter.generated.h"

UENUM(BlueprintType)
enum EDirkCharacterAnimStatus
{
	DEFAULT UMETA(Displayname="Default"),
	PROJECTILE_WEAPON_ITEM UMETA(Displayname="ProjectileWeaponItem"),
	BLADE_WEAPON_ITEM UMETA(Displayname="BladeWeaponItem"),
	SITTING UMETA(Desplayname="Sitting")
};

UCLASS(config=Game)
class ADirkCharacter : public ACharacter
{
	GENERATED_BODY()

	// Constructor
	ADirkCharacter(const FObjectInitializer& ObjectInitializer);

public:

	// Components

	// Getter for mesh component
	USkeletalMeshComponent* GetMeshComponent() const { return MeshComponent; }
	// Getter for camera component
	UCameraComponent* GetCameraComponent() const { return CameraComponent; }

	// Public Item functions

	// Setter for bHasItem --- TEMP ---
	UFUNCTION(BlueprintCallable, Category="Item")
	void SetHasItem(bool bNewHasItem) { bHasItem = bNewHasItem; }
	// Getter for bHasItem
	UFUNCTION(BlueprintCallable, Category="Item")
	bool GetHasItem() { return bHasItem; }
	// Set the characters holding item item (class variables)
	UFUNCTION(BlueprintCallable, Category="Item")
	bool SetItem(ADirkItem* Item);
	// Get the characters item
	UFUNCTION(BlueprintCallable, Category="Item")
	ADirkItem* GetItem() { return DirkItem; }
	
	// Get the animation status of the Character
	UFUNCTION(BlueprintCallable, Category="Animation")
	EDirkCharacterAnimStatus GetAnimStatus() { return AnimStatus; }

protected:

	// Begin play
	virtual void BeginPlay() override;

	// Components

	// Mesh other Player sees
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh, meta=(AllowPrivateAccess = "true"))
	USkeletalMeshComponent* MeshComponent;
	// Mesh seen by other players
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh, meta=(AllowPrivateAccess = "true"))
	USkeletalMeshComponent* ExtMeshComponent;
	// Camera
	UPROPERTY(EditAnywhere, Category=Camera, meta=(AllowPrivateAccess = "true"))
	UCameraComponent* CameraComponent;
	// Relative Camera Position
	UPROPERTY(EditAnywhere, Category=Camera, meta=(AllowPrivateAccess = "true"))
	FVector RelativeCameraLocation = FVector(-10.0f, 0.0f, 60.0f);

	// Input
	
	// Mapping Context
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputMappingContext* PawnMappingContext;
	// Jump Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;
	// Move Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;
	// Look Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;
	// Menu Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MenuAction;
	
	// Bool to check if the character has an item
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Item)
	bool bHasItem;

	// Item the character is holding
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Item")
	ADirkItem* DirkItem;

private:

	// Input

	// Called for movement input
	void Move(const FInputActionValue& Value);
	// Called for looking input
	void Look(const FInputActionValue& Value);
	// Sets up the input component
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	// Animation
	UPROPERTY(EditAnywhere, Category=Animation)
	TEnumAsByte<EDirkCharacterAnimStatus> AnimStatus = EDirkCharacterAnimStatus::DEFAULT;
};

