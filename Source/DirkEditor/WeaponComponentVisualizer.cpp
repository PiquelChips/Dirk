// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponComponentVisualizer.h"

void FWeaponComponentVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
    // Get WeaponComponent
    const UWeaponComponent* WeaponComponent = Cast<UWeaponComponent>(Component);
    if (WeaponComponent)
    {
        PDI->DrawLine(
            WeaponComponent->GetComponentLocation(), 
            WeaponComponent->GetComponentLocation() + WeaponComponent->Offset, 
            FLinearColor::Red, 
            SDPG_Foreground
        );
    }
}
