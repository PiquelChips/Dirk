// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "DirkCharacter.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputSubsystems.h"

#include "DirkPlayerController.generated.h"

/*UENUM()
enum class ECharacterType : int8
{
	// Manny Character Type
	Manny = 0,

	// Quinn Character Type
	Quinn = 1,
};*/

UCLASS()
class DIRK_API ADirkPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

protected:

	// Begin play function
	virtual void BeginPlay() override;

	// Input
	// Default Mapping Context
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;
	// Menu Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* MenuAction;
	
};
