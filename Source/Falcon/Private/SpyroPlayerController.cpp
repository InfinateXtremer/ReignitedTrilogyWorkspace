#include "SpyroPlayerController.h"

class UForceFeedbackEffect;

void ASpyroPlayerController::SetUnderDesignerControl(bool bValue, bool bClearStack) {
}

//bool ASpyroPlayerController::IsPointToTreasureKeyPressed(EInputSource RestrictToType) const {
//    return false;
//}
//
//bool ASpyroPlayerController::IsLeftTriggerKeyPressed(EInputSource RestrictToType) const {
//    return false;
//}
//
//bool ASpyroPlayerController::IsChargeKeyPressed(EInputSource RestrictToType) const {
//    return false;
//}


bool ASpyroPlayerController::GetUnderDesignerControl() const {
    return false;
}

int32 ASpyroPlayerController::GetSkipButtonMask() const {
    return 0;
}

void ASpyroPlayerController::ClientStopForceFeedbackImmediate_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag) {
}

void ASpyroPlayerController::ClientPlayForceFeedbackImmediate_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, bool bIgnoreTimeDilation, FName Tag) {
}

ASpyroPlayerController::ASpyroPlayerController() {
    this->CurrentCharacterInputComponentRef = NULL;
}

