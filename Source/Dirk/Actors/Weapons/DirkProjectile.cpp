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

// Called when the projectile hits something
void ADirkProjectile::OnHit(
    UPrimitiveComponent* HitComp,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    FVector NormalImpulse,
    const FHitResult& Hit
)
{
    if (ADirkCharacter* OtherCharacter = Cast<ADirkCharacter>(OtherActor))
    {
        // TODO: Implement Damaging Function
    }

    // Checks if the actor should be destroyed when hitssomething
    if (bShouldDestroyOnHit)
        Destroy();
}

// Hit multicast

// Validation
bool ADirkProjectile::Multi_Hit_Validate() { return true; }
// Implementation
void ADirkProjectile::Multi_Hit_Implementation()
{
    // Try and play sound if specified
    if (HitSound != nullptr)
    {
        // Play sound at arrow component
        UGameplayStatics::PlaySoundAtLocation(this, HitSound, GetActorLocation(), GetActorRotation());
    }
    
    // Try and play particles if specified
    if (HitParticle != nullptr)
    {
        // Play particle effect at arrow component
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, HitParticle, GetActorLocation(), GetActorRotation());
    }
}