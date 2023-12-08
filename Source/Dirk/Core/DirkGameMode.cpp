// Copyright Epic Games, Inc. All Rights Reserved.

#include "DirkGameMode.h"
#include "DirkPlayerController.h"
#include "UObject/ConstructorHelpers.h"

ADirkGameMode::ADirkGameMode()
	: Super()
{
	// set default playercontrollerclass to DirkPlayerController
	static ConstructorHelpers::FClassFinder<ADirkPlayerController> PlayerControllerClassFinder(TEXT("/Game/Core/DirkPlayerController"));
	PlayerControllerClass = PlayerControllerClassFinder.Class;

}
