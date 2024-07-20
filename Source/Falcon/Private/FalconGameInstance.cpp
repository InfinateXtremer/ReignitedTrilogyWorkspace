#include "FalconGameInstance.h"

class APlayerController;

void UFalconGameInstance::ShowExternalLoginUI() {
}

void UFalconGameInstance::SetUpdateMouseCursorInCutscene(bool Value) {
}

void UFalconGameInstance::SetBypassSettingInputModeForCutsceneMouseCursor(bool DoBypass) {
}

void UFalconGameInstance::QuestionScreenOptionSelected_Implementation(int32 selectedIndex) {
}

bool UFalconGameInstance::PrimaryControllerDetected() {
    return false;
}

//void UFalconGameInstance::OnInputSourceChanged(EInputSource NewInputSource) {
//}

void UFalconGameInstance::OnHideMouseCursorTimer() {
}

bool UFalconGameInstance::IsReady() {
    return false;
}

void UFalconGameInstance::HandleLevelStreamingComplete() {
}

void UFalconGameInstance::HandleGameStateChangedForCutscenes(EFalconGameState aOldState, EFalconGameState aNewState) {
}

void UFalconGameInstance::HandleGameStateChanged(EFalconGameState aOldState, EFalconGameState aNewState) {
}

APlayerController* UFalconGameInstance::GetPrimaryController() {
    return NULL;
}

int32 UFalconGameInstance::GetMaximumNumberOfControllers() {
    return 0;
}

bool UFalconGameInstance::GameSavingEnabled() {
    return false;
}

void UFalconGameInstance::DetectPrimaryController(FOnPrimaryControllerDetected OnPrimaryControllerDetected) {
}

UFalconGameInstance::UFalconGameInstance() {
    this->_screenManager = NULL;
}

