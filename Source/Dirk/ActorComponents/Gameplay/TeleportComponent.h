// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "../Core/InteractComponent.h"
#include "Math/TransformNonVectorized.h"

#include "TeleportComponent.generated.h"

UCLASS( ClassGroup=(ActorComponent), meta=(BlueprintSpawnableComponent) )
class DIRK_API UTeleportComponent : public UInteractComponent
{
	GENERATED_BODY()
	
public:

	// Location to teleport to
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	FVector TeleportDestination;

protected:

	// Begin play
	virtual void BeginPlay();

private:

	// Teleport
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Teleport(ADirkActor* Character);
	bool Server_Teleport_Validate(ADirkActor* Character);
	void Server_Teleport_Implementation(ADirkActor* Character);
};
