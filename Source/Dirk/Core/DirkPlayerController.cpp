// Fill out your copyright notice in the Description page of Project Settings.

#include "DirkPlayerController.h"

// Begin play sets up menu input
void ADirkPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// Add menu mapping context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}
}