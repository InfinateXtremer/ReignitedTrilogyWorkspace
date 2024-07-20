#include "PhasmidGlyphSystem.h"

class UObject;

bool UPhasmidGlyphSystem::SynthesizeKeyDownEventFromControlCommand(const FString& ControlCommand, UObject* ContextObject) {
    return false;
}

FPhasmidIconReturnData UPhasmidGlyphSystem::GetIconFromControlCommand(const FString& ControlCommand, UObject* ContextObject) {
    return FPhasmidIconReturnData{};
}

//FPhasmidIconReturnData UPhasmidGlyphSystem::GetIconFromAction(EPhasmidAction Action, UObject* ContextObject, EKeybindingEntry KeybindingEntry, EInputSource ForceInputSource) {
//    return FPhasmidIconReturnData{};
//}

EPhasmidAction UPhasmidGlyphSystem::GetActionFromControlCommand(const FString& ControlCommand, UObject* ContextObject) {
    return EPhasmidAction::None;
}

UPhasmidGlyphSystem::UPhasmidGlyphSystem() {
}

