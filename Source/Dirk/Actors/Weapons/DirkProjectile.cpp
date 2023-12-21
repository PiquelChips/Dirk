// Fill out your copyright notice in the Description page of Project Settings.

#include "DirkProjectile.h"

// Constructor to setup components
ADirkProjectile::ADirkProjectile()
{
    // Mesh
    MeshComponent = CreateDefaultSubobject<UMeshComponent>(TEXT("MeshComponent"));
    
    // Sets mesh as root component
    RootComponent = MeshComponent;

    // Sphere (for collision)
    SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));

    // Movement
    MoveComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MoveComponent"));
}

// Setter for Projctile speed
void ADirkProjectile::SetProjectileSpeed(float NewSpeed)
{
	MoveComponent->MaxSpeed = NewSpeed;
	MoveComponent->InitialSpeed = NewSpeed;
}
