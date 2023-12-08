// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "../Core/PickUpComponent.h"
#include "../../Gameplay/DirkProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "WeaponComponent.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(ActorComponent), meta=(BlueprintSpawnableComponent) )
class DIRK_API UWeaponComponent : public UPickUpComponent
{
	GENERATED_BODY()

	UWeaponComponent();
	
public:

	// Projectile class to spawn
	UPROPERTY(EditAnywhere, Category="Projectile")
	TSubclassOf<class ADirkProjectile> ProjectileClass;

	// Sound to play when fired
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Audio")
	USoundBase* FireSound;

	// AnimMontage to play when fired
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Animation")
	UAnimMontage* FireAnimation;

	// Fired when weapon is fired
	void Fire(ADirkCharacter* DirkCharacter);
	// Actually fires weapon
	void Fire_Implementation(ADirkCharacter* DirkCharacter);

	// Server RPC to fire projectile
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Fire(ADirkCharacter* DirkCharacter);
	bool Server_Fire_Validate(ADirkCharacter* DirkCharacter);
	void Server_Fire_Implementation(ADirkCharacter* DirkCharacter);

	// Server Multicast to play sound
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_Fire();
	bool Multi_Fire_Validate();
	void Multi_Fire_Implementation();
	
	// Projectile
	
	// Projectile Speed
	UPROPERTY(EditAnywhere, Category="Projectile")
	float ProjectileSpeed = 3000.f;

	// Muzzle offset
	UPROPERTY(EditAnywhere, Category="Projectile")
	FVector Offset = FVector(5, 60, 10);

	// Cooldown
	UPROPERTY(EditAnywhere, Category="Projectile")
	float Cooldown = 0.f;

	// if the cooldown is ongoing
	UPROPERTY(BlueprintReadOnly)
	bool bCooldown = false;

	// leftovercooldown time
	UPROPERTY(BlueprintReadOnly)
	float CooldownCurrent;
	
	// Ticks (during cooldown)
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Strats gameplay for this component
	virtual void BeginPlay() override;

};