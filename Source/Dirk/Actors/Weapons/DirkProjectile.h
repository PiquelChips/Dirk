// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "../DirkActor.h"
#include "../DirkCharacter.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "DirkProjectile.generated.h"

UCLASS()
class DIRK_API ADirkProjectile : public ADirkActor
{
	GENERATED_BODY()

public:

	// Constructor
	ADirkProjectile();

protected:

	// Components

	// Mesh (root)
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh, meta=(AllowPrivateAccess = "true"))
	UMeshComponent* MeshComponent;
	// Sphere (for collisions)
	UPROPERTY(VisibleDefaultsOnly, Category=Collision, meta=(AllowPrivateAccess = "true"))
	USphereComponent* SphereComponent;
	// Projectile movement
	UPROPERTY(VisibleDefaultsOnly, Category=Movement, meta=(AllowPrivateAccess = "true"))
	UProjectileMovementComponent* MoveComponent;

private:

	// Should the actor be destroyed when it hits something
	UPROPERTY(EditAnywhere, Category="Collision")
	bool bShouldDestroyOnHit = true;

	// Effects

	// Particles spawned at hit location
	UPROPERTY(EditAnywhere, Category="Effects")
	UNiagaraSystem* HitParticle;
	// Sound fired at hit location
	UPROPERTY(EditAnywhere, Category="Effects")
	USoundBase* HitSound;

	// Hit functions

	// Called when the projectile hits something
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	// Net multicast for sound and particles
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_Hit();
	bool Multi_Hit_Validate();
	void Multi_Hit_Implementation();

};
