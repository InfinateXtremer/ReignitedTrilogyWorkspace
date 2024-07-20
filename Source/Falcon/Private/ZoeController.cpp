#include "ZoeController.h"

class UQuestActionsComponent;

void AZoeController::ZapPlayer_Implementation(const FName& Checkpoint, UQuestActionsComponent* Actions) {
}

void AZoeController::Teaching_Implementation(UQuestActionsComponent* Actions) {
}

void AZoeController::Cooldown_Implementation(UQuestActionsComponent* Actions) {
}

void AZoeController::Autosaving_Implementation(UQuestActionsComponent* Actions) {
}

AZoeController::AZoeController() {
    this->IdleAppearDistance = 250.00f;
    this->IdleDisappearDistance = 350.00f;
    this->m_zoeActions = NULL;
}

