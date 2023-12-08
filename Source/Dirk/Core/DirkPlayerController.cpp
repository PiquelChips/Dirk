// Fill out your copyright notice in the Description page of Project Settings.

#include "DirkPlayerController.h"

#include "DirkCharacter.h"

void ADirkPlayerController::BeginPlay()
{
    // Set the pawn
	RemovePawnTickDependency(GetPawn());
    APawn* NewPawn = GetPawn();
	NewPawn = Cast<APawn>(CharacterClass);
	AttachToPawn(GetPawn());
	AddPawnTickDependency(GetPawn());
}

