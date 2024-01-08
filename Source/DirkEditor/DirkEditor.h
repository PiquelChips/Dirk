#pragma once

#include "Engine.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "UnrealEd.h"

#include "ComponentVisualizers/DirkLineComponentVisualizer.h"

DECLARE_LOG_CATEGORY_EXTERN(DirkEditor, All, All)

class FDirkEditorModule: public IModuleInterface
{
public:
    void StartupModule() override;
    void ShutdownModule() override;
};