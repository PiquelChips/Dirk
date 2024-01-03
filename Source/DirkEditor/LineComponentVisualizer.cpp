// Fill out your copyright notice in the Description page of Project Settings.

#include "LineComponentVisualizer.h"

void FLineComponentVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
    // Get LineComponent
    const ULineComponent* LineComponent = Cast<ULineComponent>(Component);
    // Check if its valid
    if (LineComponent)
    {
        PDI->DrawLine(LineComponent->GetOwner()->GetActorLocation(), 
            LineComponent->GetComponentLocation(),
            FLinearColor::Red,
            SDPG_Foreground
        );
    }
}
