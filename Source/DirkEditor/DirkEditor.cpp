#include "DirkEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(FDirkEditorModule, DirkEditor);

void FDirkEditorModule::StartupModule()
{
    // Check if editor is valid
    if (GUnrealEd)
    {
        // Registerin the Teleport visualizer
        TSharedPtr<FTeleportComponentVisualizer> TeleportVisualizer = MakeShareable(new FTeleportComponentVisualizer);
        if (TeleportVisualizer.IsValid())
        {
            GUnrealEd->RegisterComponentVisualizer(UTeleportComponent::StaticClass()->GetFName(), TeleportVisualizer);
            TeleportVisualizer->OnRegister();
        }
        // Registerin the Weapon visualizer
        TSharedPtr<FWeaponComponentVisualizer> WeaponVisualizer = MakeShareable(new FWeaponComponentVisualizer);
        if (WeaponVisualizer.IsValid())
        {
            GUnrealEd->RegisterComponentVisualizer(UWeaponComponent::StaticClass()->GetFName(), WeaponVisualizer);
            WeaponVisualizer->OnRegister();
        }
    }
}

void FDirkEditorModule::ShutdownModule()
{
    // Check if editor is valid
    if (GUnrealEd)
    {
        GUnrealEd->UnregisterComponentVisualizer(UTeleportComponent::StaticClass()->GetFName());
        GUnrealEd->UnregisterComponentVisualizer(UWeaponComponent::StaticClass()->GetFName());
    }
}