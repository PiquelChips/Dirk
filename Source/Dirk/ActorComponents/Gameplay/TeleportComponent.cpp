// Fill out your copyright notice in the Description page of Project Settings.


#include "TeleportComponent.h"

// Called at the begin of the game, assigns interaction to tlelport function
void UTeleportComponent::BeginPlay()
{
    Super::BeginPlay();

    // Register interact event
    OnInteract.AddDynamic(this, &UTeleportComponent::Server_Teleport);
}

// Teleport function

// Server validation
bool UTeleportComponent::Server_Teleport_Validate(AActor* TeleportingActor) { return true; }

// Server Teleport function implementation, teleports actor
void UTeleportComponent::Server_Teleport_Implementation(AActor* TeleportingActor) { if (TeleportingActor != nullptr) { TeleportingActor->SetActorTransform(FTransform(TeleportDestination)); } }
