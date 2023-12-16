// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "../Gameplay/DirkProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputSubsystems.h"
#include "UObject/UObjectGlobals.h"

#include "DirkCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;

UCLASS(config=Game)
class ADirkCharacter : public ACharacter
{
	GENERATED_BODY()

	// Components

	// Mesh other Player sees
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* MeshComponent;
	// Mesh seen by other players
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* ExtMeshComponent;
	// Camera
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Camera, meta=(AllowPrivateAccess = "true"))
	UCameraComponent* CameraComponent;
	// Relative Camera Position
	UPROPERTY(EditAnywhere, Category=Camera)
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
	
public:
	ADirkCharacter(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void BeginPlay();

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	// Components

	// Getter for exterior mesh component
	USkeletalMeshComponent* GetMeshComponent() const { return MeshComponent; }
	// Getter for camera component
	UCameraComponent* GetCameraComponent() const { return CameraComponent; }

	// Has Item

	// Setter for bHasItem
	UFUNCTION(BlueprintCallable, Category = Item)
	void SetHasItem(bool bNewHasItem) { bHasItem = bNewHasItem; }
	// Getter for bHasItem
	UFUNCTION(BlueprintCallable, Category = Item)
	bool GetHasItem() { return bHasItem; }
	// Bool to check if the character has an item
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Item)
	bool bHasItem;



};

