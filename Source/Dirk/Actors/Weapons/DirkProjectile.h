// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "../DirkActor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "DirkProjectile.generated.h"

UCLASS()
class DIRK_API ADirkProjectile : public ADirkActor
{
	GENERATED_BODY()

	// Constructor
	ADirkProjectile();

public:

	// Sets projectile speed
	void SetProjectileSpeed(float NewSpeed);

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

};
