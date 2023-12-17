// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "../DirkActor.h"
#include "../../ActorComponents/Core/PickUpComponent.h"
#include "Components/ArrowComponent.h"
#include "NiagaraFunctionLibrary.h"

#include "DirkProjectileWeapon.generated.h"

UCLASS()
class DIRK_API ADirkProjectileWeapon : public ADirkActor
{
	GENERATED_BODY()

	// Constructor
	ADirkProjectileWeapon();
	
protected:

	// Begin play function
	virtual void BeginPlay() override;

	// Tick function
	virtual void Tick(float DeltaTime) override;

	// Components

	// Mesh
	UPROPERTY(VisibleDefaultsOnly, Category="Mesh", meta=(AllowPrivateAccess = "true"))
	USkeletalMeshComponent* MeshComponent;
	// Arrow 
	UPROPERTY(VisibleDefaultsOnly, Category="Projectile", meta=(AllowPrivateAccess = "true"))
	UArrowComponent* ArrowComponent;
	// Pickup
	UPROPERTY(VisibleDefaultsOnly, Category="Pickup/Drop", meta=(AllowPrivateAccess = "true"))
	UPickUpComponent* PickupComponent;

	// Projectile

	// Projectile class
	UPROPERTY(EditAnywhere, Category="Projectile")
	TSubclassOf<ADirkActor> ProjectileClass;
	// Projectile velocity
	UPROPERTY(EditAnywhere, Category="Projectile")
	float ProjectileSpeed = 3000.f;

	// Cooldown

	// Cooldown time
	UPROPERTY(EditAnywhere, Category="Cooldown")
	float Cooldown = 0.f;
	// If Cooldown is ongoing
	UPROPERTY(BlueprintReadOnly)
	bool bCooldown = false;
	// Current cooldown time
	UPROPERTY(BlueprintReadOnly)
	float CooldownCurrent;

private:

	// Effects

	// Fire Animation
	UPROPERTY(EditAnywhere, Category="Effects")
	UAnimMontage* FireAnimation;
	// Fire Sound
	UPROPERTY(EditAnywhere, Category="Effects")
	USoundBase* FireSound;
	// Fire Particle Effect
	UPROPERTY(EditAnywhere, Category="Effects")
	UNiagaraSystem* ParticleEffect;

	// Fire Functions

	// Fired on Input
	void Fire(ADirkCharacter* DirkCharacter);
	// Implements the firing logic
	void Fire_Implementation(ADirkCharacter* DirkCharacter);

	// Server RPCs

	// Server RPC to fire the projectile
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Fire(ADirkCharacter* DirkCharacter);
	bool Server_Fire_Validate(ADirkCharacter* DirkCharacter);
	void Server_Fire_Implementation(ADirkCharacter* DirkCharacter);
	// Server NetMulticast to play effects
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_Fire();
	bool Multi_Fire_Validate();
	void Multi_Fire_Implementation();

};
