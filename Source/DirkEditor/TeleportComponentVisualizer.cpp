// Fill out your copyright notice in the Description page of Project Settings.

#include "TeleportComponentVisualizer.h"

void FTeleportComponentVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
    // Get TeleportComponent
    const UTeleportComponent* TeleportComponent = Cast<UTeleportComponent>(Component);
    if (TeleportComponent)
    {
        PDI->DrawLine(TeleportComponent->GetComponentLocation(), 
            TeleportComponent->TeleportDestination, 
            FLinearColor::Red, 
            SDPG_Foreground
        );
    }
}
