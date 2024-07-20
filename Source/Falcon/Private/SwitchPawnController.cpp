#include "SwitchPawnController.h"

class UQuestActionsComponent;

void ASwitchPawnController::IdleNoFade_Implementation(UQuestActionsComponent* Actions) {
}

void ASwitchPawnController::Idle_Implementation(UQuestActionsComponent* Actions) {
}

void ASwitchPawnController::AlternateNoFade_Implementation(UQuestActionsComponent* Actions) {
}

void ASwitchPawnController::Alternate_Implementation(UQuestActionsComponent* Actions) {
}

ASwitchPawnController::ASwitchPawnController() {
    this->PrimaryClass = NULL;
    this->AlternateClass = NULL;
    this->AlternateCamera = NULL;
    this->AlternateVehicle = NULL;
    this->fadeTime = 0.00f;
    this->PrimaryPoint = NULL;
    this->AlternatePoint = NULL;
    this->AlternateSpline = NULL;
}

