#include "SparxController.h"

class UQuestActionsComponent;

void ASparxController::OnVFXEvent(FName evtName, const FTransform& xfm, FName param0, float param1) {
}

void ASparxController::Completed_Implementation(UQuestActionsComponent* Actions) {
}

ASparxController::ASparxController() {
    this->TimerBarClass = NULL;
    this->AmmoGaugeClass = NULL;
    this->HealthBarClass = NULL;
    this->SparxKeyClass = NULL;
    this->bIsTutorial = false;
    this->m_sparx = NULL;
    this->m_sparxKey = NULL;
}

