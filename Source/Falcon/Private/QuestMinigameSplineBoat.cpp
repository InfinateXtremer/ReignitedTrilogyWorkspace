#include "QuestMinigameSplineBoat.h"

class UQuestActionsComponent;

void AQuestMinigameSplineBoat::Ticking_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameSplineBoat::RxLevelSeqFinished() {
}

void AQuestMinigameSplineBoat::Quit_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameSplineBoat::Idle_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameSplineBoat::Completed_Implementation(UQuestActionsComponent* Actions) {
}

AQuestMinigameSplineBoat::AQuestMinigameSplineBoat() {
    this->Spline = NULL;
    this->StartPoint = NULL;
    this->FollowDist = 900.00f;
    this->GameTimeMax = 60.00f;
    this->VictorySequence = NULL;
    this->DefeatSequence = NULL;
    this->LevelSeqRoot = NULL;
    this->PlayerClass = NULL;
    this->VehicleClass = NULL;
    this->EnemyClass = NULL;
    this->LogClass = NULL;
    this->RockClass = NULL;
    this->fadeTime = 0.75f;
}

