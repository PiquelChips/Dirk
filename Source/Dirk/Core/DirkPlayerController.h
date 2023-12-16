// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/PlayerController.h"
#include "EnhancedInputSubsystems.h"

#include "DirkPlayerController.generated.h"

UCLASS()
class DIRK_API ADirkPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	// Begin play function
	virtual void BeginPlay() override;

private:

	// Input
	
	// Default Mapping Context
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;
	// Menu Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* MenuAction;
	
};
