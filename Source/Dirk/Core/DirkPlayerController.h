// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/GameplayStatics.h"

#include "DirkPlayerController.generated.h"

UCLASS()
class DIRK_API ADirkPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	// Is the player in a game or in main menu
	UFUNCTION(BlueprintCallable, Category="Menu")
	bool IsInGame() { return bInGame; }

	// CHanging level
	UFUNCTION(BlueprintCallable, Category="Level")
	void OpenEntryLevel();
	UFUNCTION(BlueprintImplementableEvent, Category="Level")
	void OpenedEntryLevel();
	UFUNCTION(BlueprintCallable, Category="Level")
	void OpenMenuLevel();
	UFUNCTION(BlueprintImplementableEvent, Category="Level")
	void OpenedMenuLevel();

protected:

	// Begin play function
	virtual void BeginPlay() override;

private:

	// If the player is in a game or in the main menu
	UPROPERTY(VisibleDefaultsOnly, Category="Menu")
	bool bInGame;

	// Input
	
	// Default Mapping Context
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	// Menu Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MenuAction;

	// Menu world
	UPROPERTY(EditAnywhere, Category="Level")
	TSoftObjectPtr<UWorld> MenuWorld;
	// Entry world
	UPROPERTY(EditAnywhere, Category="Level")
	TSoftObjectPtr<UWorld> EntryWorld;

};
