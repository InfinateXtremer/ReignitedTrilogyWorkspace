#include "CameraController.h"

class UQuestActionsComponent;

void ACameraController::Idle_Implementation(UQuestActionsComponent* Actions) {
}

void ACameraController::Active_Implementation(UQuestActionsComponent* Actions) {
}

ACameraController::ACameraController() {
    this->Opponent = NULL;
    this->InterpTime = 1.50f;
    this->UseSecTarget = false;
    this->ReturnToTargetCurve = NULL;
}

