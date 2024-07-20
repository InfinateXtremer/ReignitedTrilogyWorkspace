#include "QuestMinigameExample.h"

class UQuestActionsComponent;

void AQuestMinigameExample::Ticking_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameExample::Idle_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameExample::Completed_Implementation(UQuestActionsComponent* Actions) {
}


AQuestMinigameExample::AQuestMinigameExample() {
    this->StartPoint = NULL;
    this->EnemyClass = NULL;
    this->PlayerClass = NULL;
    this->VehicleClass = NULL;
    this->CountWidgetClass = NULL;
    this->fadeTime = 1.00f;
}

