// Fill out your copyright notice in the Description page of Project Settings.

#include "DirkTeleporter.h"

// Constructor, Setup various components
ADirkTeleporter::ADirkTeleporter()
{
    // set that actor can not Tick
    PrimaryActorTick.bCanEverTick = false;

    // Components

    // InteractComponent
    InteractComponent = CreateDefaultSubobject<UDirkInteractComponent>(TEXT("InteractComponent"));
    // Set as root
    RootComponent = InteractComponent;
    // Line Component
    LineComponent = CreateDefaultSubobject<UDirkLineComponent>(TEXT("LineComponent"));
    LineComponent->SetupAttachment(RootComponent);
}

// Server Teleport RPC

// Server validation
bool ADirkTeleporter::Server_Teleport_Validate(AActor* Actor) { return true; }
// Server Implementation
void ADirkTeleporter::Server_Teleport_Implementation(AActor* Actor)
{
    // Checks if Teleporting actor is valid
    if (Actor != nullptr) 
    { 
        // Teleports to LineComponent
        Actor->SetActorLocation(LineComponent->GetComponentLocation());
        // Calls multicast to fire effects
        Multi_Teleport(Actor);
    }
}

// Network Multicast Teleport RPC

// Server Validation
bool ADirkTeleporter::Multi_Teleport_Validate(AActor* Actor) { return true; }
// Server implementation
void ADirkTeleporter::Multi_Teleport_Implementation(AActor* Actor)
{
    // Departure Effects

    // Checks if DepartureSound is valid
    if (DepartureSound != nullptr)
    {
        UGameplayStatics::PlaySoundAtLocation(this, DepartureSound, GetActorLocation(), GetActorRotation());
    }
    
    // Checks if DepartureParticle is valid
    if (DepartureParticle != nullptr)
    {
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, DepartureParticle, GetActorLocation(), GetActorRotation());
    }

    // Arrival effects

    // Checks if ArrivalSound is valid
    if (DepartureSound != nullptr)
    {
        UGameplayStatics::PlaySoundAtLocation(this, ArrivalSound, LineComponent->GetComponentLocation(), LineComponent->GetComponentRotation());
    }

    // Checks if ArrivalParticle is valid
    if (DepartureParticle != nullptr)
    {
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, ArrivalParticle, LineComponent->GetComponentLocation(), LineComponent->GetComponentRotation());
    }
}