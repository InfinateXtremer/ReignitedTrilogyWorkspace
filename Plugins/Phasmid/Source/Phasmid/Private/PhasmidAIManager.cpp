#include "PhasmidAIManager.h"

class AFalconAIController;

void UPhasmidAIManager::ScheduleSpawnRequest() {
}

void UPhasmidAIManager::ControllerUnpossessed(AFalconAIController* Controller) {
}

UPhasmidAIManager::UPhasmidAIManager() {
    this->MaxSpawnsPerFrame = 4;
    this->InitialPoolSize = 10;
    this->bAssignFreeOnRequest = false;
}

