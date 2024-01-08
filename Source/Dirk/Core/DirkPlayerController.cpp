// Fill out your copyright notice in the Description page of Project Settings.

#include "DirkPlayerController.h"

#include "../UI/DirkHUD.h"
#include "EnhancedInputComponent.h"

// Begin play sets up menu input
void ADirkPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// Add menu mapping context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	if (GetWorld()->GetName() == "Menu")
	{
		// Tell PC that it is not in game	
		OpenedMenuLevel();
		bInGame = false;
	}
	else if (GetWorld()->GetName() == "Entry")
	{
		OpenedEntryLevel();
		bInGame = true;
	}
}

// Changing Level
void ADirkPlayerController::OpenEntryLevel()
{
	UGameplayStatics::OpenLevelBySoftObjectPtr(this, EntryWorld);
	OpenedEntryLevel();
	bInGame = true;
}

void ADirkPlayerController::OpenMenuLevel()
{
	UGameplayStatics::OpenLevelBySoftObjectPtr(this, MenuWorld);
	OpenedMenuLevel();
	bInGame = false;
}