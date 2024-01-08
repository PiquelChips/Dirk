// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "../../Core/DirkActor.h"
#include "../ActorComponents/DirkInteractComponent.h"
#include "../../Util/ActorComponents/DirkLineComponent.h"
#include "NiagaraFunctionLibrary.h"

#include "DirkTeleporter.generated.h"

UCLASS()
class DIRK_API ADirkTeleporter : public ADirkActor
{
	GENERATED_BODY()

public:

	// Constructor
	ADirkTeleporter();

	// Teleport
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Teleport(AActor* Actor);
	bool Server_Teleport_Validate(AActor* Actor);
	void Server_Teleport_Implementation(AActor* Actor);

protected:

	// Components

	// InteractComponent to handle interaction
	UPROPERTY(VisibleDefaultsOnly, Category="Interaction")
	UDirkInteractComponent* InteractComponent;
	// Line component that will handle teleport destination
	UPROPERTY(VisibleDefaultsOnly, Category="Teleportation")
	UDirkLineComponent* LineComponent;

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
