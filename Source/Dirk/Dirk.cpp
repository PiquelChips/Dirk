// Copyright Epic Games, Inc. All Rights Reserved.

#include "Dirk.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, Dirk, "Dirk" );

void FDirk::StartupModule()
{
	FDefaultGameModuleImpl::StartupModule();
}

void FDirk::ShutdownModule()
{
	FDefaultGameModuleImpl::ShutdownModule();
}
