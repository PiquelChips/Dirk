// Fill out your copyright notice in the Description page of Project Settings.

#include "DirkHUD.h"

//#include "MainMenu/DirkMainMenuWidget.h"
#include "Widgets/SWeakWidget.h"

// Begin play
void ADirkHUD::BeginPlay()
{
    Super::BeginPlay();

    DirkPlayerOwner = Cast<ADirkPlayerController>(PlayerOwner);
}