// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "../../Actors/DirkActor.h"
#include "../../ActorComponents/InteractComponent.h"
#include "../../ActorComponents/Util/LineComponent.h"
#include "NiagaraFunctionLibrary.h"

#include "Teleporter.generated.h"

UCLASS()
class DIRK_API ATeleporter : public ADirkActor
{
	GENERATED_BODY()

public:

	// Constructor
	ATeleporter();

	// Teleport
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Teleport(AActor* Actor);
	bool Server_Teleport_Validate(AActor* Actor);
	void Server_Teleport_Implementation(AActor* Actor);

protected:

	// Components

	// InteractComponent to handle interaction
	UPROPERTY(VisibleDefaultsOnly, Category="Interaction")
	UInteractComponent* InteractComponent;
	// Line component that will handle teleport destination
	UPROPERTY(VisibleDefaultsOnly, Category="Teleportation")
	ULineComponent* LineComponent;

	// Effects
	
	// Sound played at actor departure location
	UPROPERTY(EditAnywhere, Category="Effects")
	USoundBase* DepartureSound;
	// Particle played at actor departure location
	UPROPERTY(EditAnywhere, Category="Effects")
	UNiagaraSystem* DepartureParticle;
	// Sound played at actor Arrival location
	UPROPERTY(EditAnywhere, Category="Effects")
	USoundBase* ArrivalSound;
	// Particle played at actor Arrival location
	UPROPERTY(EditAnywhere, Category="Effects")
	UNiagaraSystem* ArrivalParticle;

private:

	// Network multicast to fire effects
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_Teleport(AActor* Actor);
	bool Multi_Teleport_Validate(AActor* Actor);
	void Multi_Teleport_Implementation(AActor* Actor);
};
