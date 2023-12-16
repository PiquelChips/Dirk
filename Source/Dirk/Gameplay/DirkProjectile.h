// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

#include "DirkProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS(config=Game)
class ADirkProjectile : public AActor
{
	GENERATED_BODY()

	// Constructor
	ADirkProjectile();

public:

	// Called when projectile hits something 
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	// Returns CollisionComp subobject
	USphereComponent* GetCollisionComp() const { return CollisionComp; }
	// Returns ProjectileMovement subobject
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }

protected:

	// Components

	// Sphere collision component
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	USphereComponent* CollisionComp;
	// Projectile movement component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;


};

