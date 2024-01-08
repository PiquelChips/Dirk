// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/HUD.h"
#include "../Core/DirkPlayerController.h"

#include "DirkHUD.generated.h"

UCLASS()
class DIRK_API ADirkHUD : public AHUD
{
	GENERATED_BODY()

/*
public:

	// Displays the main menu on the owning HUD
	void DisplayMainMenu();
	// Hides the main menu
	void HideMainMenu();
*/
protected:

	// Begin play
	virtual void BeginPlay() override;
	
	// Dirk player controller owning the HUD
	UPROPERTY(VisibleAnywhere)
	ADirkPlayerController* DirkPlayerOwner;

};
