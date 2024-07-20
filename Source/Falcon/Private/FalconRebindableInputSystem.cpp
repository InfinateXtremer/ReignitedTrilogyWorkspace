#include "FalconRebindableInputSystem.h"

void UFalconRebindableInputSystem::StoreCurrentActionBindings() {
}

void UFalconRebindableInputSystem::SetupLoadGlobalKeybindingChanges() {
}

void UFalconRebindableInputSystem::SetMouseSensitivity(float NewSensitivity) {
}

void UFalconRebindableInputSystem::SetKeyboardPhasmidActionBinding(EPhasmidAction Action, FKey NewKey, EKeybindingEntry KeybindingEntry, bool RemoveKeybindsThatAreTheSame) {
}

void UFalconRebindableInputSystem::SetKeyboardBindingForListOfKeybindings(TArray<FPhasmidKeybindData> Bindings, FKey NewKey, EKeybindingEntry KeybindingEntry) {
}

void UFalconRebindableInputSystem::SetKeyboardAxisBinding(FName BindingName, FKey NewKey, EKeybindingEntry KeybindingEntry, float Scale, bool SaveBindings) {
}

void UFalconRebindableInputSystem::SetKeyboardActionBinding(FName BindingName, FKey NewKey, EKeybindingEntry KeybindingEntry, bool SaveBindings) {
}

void UFalconRebindableInputSystem::SetAllBindingsBackToDefault() {
}

void UFalconRebindableInputSystem::RevertToStoredActionBindings() {
}

void UFalconRebindableInputSystem::RemoveBindingForAction(EPhasmidAction Action, EKeybindingEntry KeybindingEntry) {
}

void UFalconRebindableInputSystem::LoadGlobalKeybindingChanges() {
}

bool UFalconRebindableInputSystem::IsKeyAlreadyBoundToAction(EPhasmidAction Action, FKey Key) const {
    return false;
}

bool UFalconRebindableInputSystem::IsKeyAlreadyBound(FKey Key, TArray<EPhasmidAction> ExcludeActionsFromSearch) const {
    return false;
}

void UFalconRebindableInputSystem::InvertAxis(FName AxisName) {
}

void UFalconRebindableInputSystem::Initialize() {
}

TArray<EPhasmidAction> UFalconRebindableInputSystem::GetNamesOfUnboundedPrimaryActions() const {
    return TArray<EPhasmidAction>();
}

TArray<FName> UFalconRebindableInputSystem::GetNamesOfBindingsContainingKey(FKey Key, TArray<FName> ExcludeBindingsFromSearch) const {
    return TArray<FName>();
}

TArray<EPhasmidAction> UFalconRebindableInputSystem::GetNamesOfActionsContainingKey(FKey Key, TArray<EPhasmidAction> ExcludeActionsFromSearch) const {
    return TArray<EPhasmidAction>();
}

TArray<FPhasmidKeyData> UFalconRebindableInputSystem::GetKeyboardKeysForAction(EPhasmidAction Action) const {
    return TArray<FPhasmidKeyData>();
}

TArray<FPhasmidKeyData> UFalconRebindableInputSystem::GetGamepadKeysForAction(EPhasmidAction Action) const {
    return TArray<FPhasmidKeyData>();
}

FText UFalconRebindableInputSystem::GetDisplayNameForAction(EPhasmidAction Action) const {
    return FText::GetEmpty();
}

float UFalconRebindableInputSystem::GetAxisScale(FName AxisName) {
    return 0.0f;
}

TArray<FFalconInputData> UFalconRebindableInputSystem::GetAllInputBindingData() const {
    return TArray<FFalconInputData>();
}

void UFalconRebindableInputSystem::Debug_PrintAllCurrentKeybindings() {
}

void UFalconRebindableInputSystem::Debug_PrintAllChangedKeybindingsInSaveData() {
}

UFalconRebindableInputSystem::UFalconRebindableInputSystem() {
}

