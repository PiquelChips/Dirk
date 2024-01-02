#include "DirkEditor.h"

IMPLEMENT_GAME_MODULE(FDirkEditorModule, DirkEditor);

// Calledwhen module starts up, registers component visualizers
void FDirkEditorModule::StartupModule()
{
    // Check if editor is valid
    if (GUnrealEd)
    {
        // Register the Line visualizer
        TSharedPtr<FLineComponentVisualizer> LineVisualizer = MakeShareable(new FLineComponentVisualizer);
        if (LineVisualizer.IsValid())
        {
            GUnrealEd->RegisterComponentVisualizer(ULineComponent::StaticClass()->GetFName(), LineVisualizer);
            LineVisualizer->OnRegister();
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
        GUnrealEd->UnregisterComponentVisualizer(ULineComponent::StaticClass()->GetFName());
    }
}