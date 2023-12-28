// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "../DirkItem.h"
#include "DirkProjectile.h"
#include "Components/ArrowComponent.h"
#include "NiagaraFunctionLibrary.h"

#include "DirkProjectileWeapon.generated.h"

UCLASS()
class DIRK_API ADirkProjectileWeapon : public ADirkItem
{
	GENERATED_BODY()

public:

	// Constructor
	ADirkProjectileWeapon();
	
	// Fired on Input
	void Use() override;

protected:

	// Begin play function
	virtual void BeginPlay() override;

	// Tick function
	virtual void Tick(float DeltaTime) override;

	// Components

	// Arrow 
	UPROPERTY(VisibleDefaultsOnly, Category="Projectile", meta=(AllowPrivateAccess = "true"))
	UArrowComponent* ArrowComponent;

	// Projectile

	// Projectile class
	UPROPERTY(EditAnywhere, Category="Projectile")
	TSubclassOf<ADirkProjectile> ProjectileClass;
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

	// Weapon fire handling functions

	// Implements the firing logic
	void Fire_Implementation();

	// Server RPCs

	// Server RPC to fire the projectile
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Fire();
	bool Server_Fire_Validate();
	void Server_Fire_Implementation();
	// Server NetMulticast to play effects
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_Fire();
	bool Multi_Fire_Validate();
	void Multi_Fire_Implementation();

};
