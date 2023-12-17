#include "DirkEditor.h"

IMPLEMENT_GAME_MODULE(FDirkEditorModule, DirkEditor);

// Calledwhen module starts up, registers component visualizers
void FDirkEditorModule::StartupModule()
{
    // Check if editor is valid
    if (GUnrealEd)
    {
        // Register the Teleport visualizer
        TSharedPtr<FTeleportComponentVisualizer> TeleportVisualizer = MakeShareable(new FTeleportComponentVisualizer);
        if (TeleportVisualizer.IsValid())
        {
            GUnrealEd->RegisterComponentVisualizer(UTeleportComponent::StaticClass()->GetFName(), TeleportVisualizer);
            TeleportVisualizer->OnRegister();
        }
    }
}

// Called when module shuts down, unregisters component visualizers
void FDirkEditorModule::ShutdownModule()
{
    // Check if editor is valid
    if (GUnrealEd)
    {
        // Unregister Tleport Component visualizer
        GUnrealEd->UnregisterComponentVisualizer(UTeleportComponent::StaticClass()->GetFName());
    }
}