// Fill out your copyright notice in the Description page of Project Settings.

#include "DirkLineComponentVisualizer.h"

void FDirkLineComponentVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
    // Get LineComponent
    const UDirkLineComponent* DirkLineComponent = Cast<UDirkLineComponent>(Component);
    // Check if its valid
    if (DirkLineComponent)
    {
        PDI->DrawLine(DirkLineComponent->GetOwner()->GetActorLocation(), 
            DirkLineComponent->GetComponentLocation(),
            FLinearColor::Red,
            SDPG_Foreground
        );
    }
}
