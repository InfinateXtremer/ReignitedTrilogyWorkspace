#include "FalconHud.h"

class UDataTable;
class UFalconRebindableInputSystem;
class UObject;
class UWidget;

//void AFalconHud::UpdateMouseCursorVisibility(EInputSource Unused) {
//}

void AFalconHud::UnforceInputSource() {
}

void AFalconHud::SetUseOldKeyboardMouseConfig(bool UseOldConfig) {
}

void AFalconHud::SetUseMouseForFlying(bool UseMouse) {
}

void AFalconHud::SetMouseYForFlyingInverted(bool isInverted) {
}

void AFalconHud::SetInputToUIOnlyMode(UWidget* WidgetToFocus, EMouseLockMode MouseLockMode) {
}

void AFalconHud::SetInputToGameOnlyMode() {
}

void AFalconHud::SetFlySensitivity(float FlyXAxis, float FlyYAxis) {
}

void AFalconHud::SetChargeSensitivity(float Value) {
}

void AFalconHud::SetChargeModifierToDefault() {
}

void AFalconHud::SetChargeModifier(float Value) {
}

void AFalconHud::SaveGameMaximize() {
}

void AFalconHud::ResetMouseYForFlyingInverted() {
}

void AFalconHud::ResetFlySensitivity() {
}

void AFalconHud::ResetChargeSensitivity() {
}

void AFalconHud::ResetAllKeybindsToDefault() {
}

void AFalconHud::PrintAllKeybindings() {
}

void AFalconHud::PrintAllChangedKeybindingsInSave() {
}

bool AFalconHud::IsStuckFixEnabled() {
    return false;
}

bool AFalconHud::IsKeyValid(FKey InKey) {
    return false;
}

bool AFalconHud::IsKeyContainedInInputBindingsFromIni(const FName IniBinding, const FKeyEvent& KeyEvent) {
    return false;
}

bool AFalconHud::IsConsole() {
    return false;
}

UFalconRebindableInputSystem* AFalconHud::GetRebindableInputSystem() const {
    return NULL;
}

UDataTable* AFalconHud::GetDebugButtonPanelTable() {
    return NULL;
}

float AFalconHud::GetChargeModifier() {
    return 0.0f;
}

void AFalconHud::ForceInputSource(int32 Source) {
}

void AFalconHud::FlightSummaryShow_Implementation() {
}

void AFalconHud::FlightSummaryHide_Implementation() {
}

void AFalconHud::FlightSummaryConfigure_Implementation(UObject* aOwner, EInventoryType flightReward, const TArray<FFlightResult>& targetResults, EFlightLevelResult FlightResult, float Time, float bestTime, int32 place) {
}

void AFalconHud::FlightScreenShow_Implementation(UClass* flightScreenWidgetClass, float startingSeconds, bool orbChallenge, const TArray<EFlightLevelTargetType>& Targets) {
}

void AFalconHud::FlightScreenHide_Implementation(UClass* flightScreenWidgetClass) {
}

float AFalconHud::FlightScreenGetTimeRemaining_Implementation() {
    return 0.0f;
}

float AFalconHud::FlightScreenGetTimeElapsed_Implementation() {
    return 0.0f;
}

void AFalconHud::FlightScreenCollect_Implementation(UClass* flightScreenWidgetClass, EFlightLevelTargetType ItemType, float bonusSeconds) {
}

void AFalconHud::EnableStuckFix() {
}

void AFalconHud::DisableStuckFix() {
}

FKeyEvent AFalconHud::CreateKeyEvent(FKey InKey) {
    return FKeyEvent{};
}

void AFalconHud::ChangeKeyboardAxisKeybindingToKey(FName BindingName, const FString& KeyName, int32 Entry, float Scale) {
}

void AFalconHud::ChangeKeyboardActionKeybindingToKey(FName BindingName, const FString& KeyName, int32 Entry) {
}




AFalconHud::AFalconHud() {
    this->RebindableInputSystem = NULL;
    this->bIsStuckFixEnabled = false;
}

