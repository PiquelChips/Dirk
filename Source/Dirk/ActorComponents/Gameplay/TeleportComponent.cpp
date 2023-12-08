// Fill out your copyright notice in the Description page of Project Settings.


#include "../Gameplay/TeleportComponent.h"
#include "Math/TransformNonVectorized.h"

void UTeleportComponent::BeginPlay()
{
    Super::BeginPlay();

    // Register interact event
    OnInteract.AddDynamic(this, &UTeleportComponent::Server_Teleport);
}

bool UTeleportComponent::Server_Teleport_Validate(AActor* Character) { return true; }

void UTeleportComponent::Server_Teleport_Implementation(AActor* Character)
{
    if (Character != nullptr)
        Character->SetActorTransform(FTransform(TeleportDestination));
}
