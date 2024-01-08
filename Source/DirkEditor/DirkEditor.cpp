#include "DirkEditor.h"

IMPLEMENT_GAME_MODULE(FDirkEditorModule, DirkEditor);

// Calledwhen module starts up, registers component visualizers
void FDirkEditorModule::StartupModule()
{
    // Check if editor is valid
    if (GUnrealEd)
    {
        // Register the Line visualizer
        TSharedPtr<FDirkLineComponentVisualizer> DirkLineVisualizer = MakeShareable(new FDirkLineComponentVisualizer);
        if (DirkLineVisualizer.IsValid())
        {
            GUnrealEd->RegisterComponentVisualizer(UDirkLineComponent::StaticClass()->GetFName(), DirkLineVisualizer);
            DirkLineVisualizer->OnRegister();
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
        GUnrealEd->UnregisterComponentVisualizer(UDirkLineComponent::StaticClass()->GetFName());
    }
}