// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "../ActorComponents/Core/InteractComponent.h"
#include "DirkActor.h"

#include "DirkItem.generated.h"

UENUM(BlueprintType)
enum EDirkItemType
{
	PROJECTILE_WEAPON UMETA(Displayname = "Projectile Weapon"),
	BLADE_WEAPON UMETA(Displayname = "Blade Weapon")
};

UCLASS()
class DIRK_API ADirkItem : public ADirkActor
{
	GENERATED_BODY()

public:

	// Constructor
	ADirkItem();

	// Fired when Use key is pressed
	virtual void Use();
	
	// Pick up function
	UFUNCTION()
	void PickUp(AActor* OtherActor);

	UFUNCTION(BlueprintCallable, Category="Item")
	EDirkItemType GetItemType() { return ItemType; }

protected:

	// Called when actor leaves the game (destroyed)
	void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	
	// Components

	// Scene component (root) change to Custom dirk component if needed
	UPROPERTY(VisibleDefaultsOnly)
	USceneComponent* SceneComponent;
	// InteractComponent
	UPROPERTY(VisibleDefaultsOnly, Category="Interaction")
	UInteractComponent* InteractComponent;
	// Mesh
	UPROPERTY(VisibleDefaultsOnly, Category="Mesh")
	USkeletalMeshComponent* MeshComponent;
	
	// Owning/Holding Character
	ADirkCharacter* Character;
	
private:

	// Input

	// MappingContext
	UPROPERTY(EditAnywhere, Category="PickUp/Drop")
	UInputMappingContext* UseMappingContext;
	// Use Input Action
	UPROPERTY(EditAnywhere, Category="PickUp/Drop")
	UInputAction* UseAction;
	// Drop Input Action
	UPROPERTY(EditAnywhere, Category="PickUp/Drop")
	UInputAction* DropAction;
	
	// Input Binding Handles (saved to be removed later)
	uint32 UseBindingHandle;
	uint32 DropBindingHandle;

	// Fired when drop key is pressed
	void Drop();

	// Fired when drop key is pressed
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Drop();
	bool Server_Drop_Validate();
	void Server_Drop_Implementation();
	
	// Respawns new version
	void Respawn();

	// Static class to spawn on drop
	UPROPERTY(EditAnywhere, Category="PickUp/Drop")
	UClass* RespawnClass = ADirkItem::StaticClass();

	// Item type
	UPROPERTY(EditAnywhere, Category="Item")
	TEnumAsByte<EDirkItemType> ItemType = EDirkItemType::BLADE_WEAPON;
};
