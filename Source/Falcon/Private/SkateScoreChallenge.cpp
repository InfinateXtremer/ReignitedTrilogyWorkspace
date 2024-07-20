#include "SkateScoreChallenge.h"

class UQuestActionsComponent;

void ASkateScoreChallenge::StartVert_Implementation() {
}

void ASkateScoreChallenge::StartLaunch_Implementation() {
}

void ASkateScoreChallenge::ShowHighScore_Implementation(UQuestActionsComponent* Actions) {
}

void ASkateScoreChallenge::RxSkateEvent(EPCMSkateEventType evtType, FName Name) {
}



void ASkateScoreChallenge::onQuestAreaExitRequested(EFalconAreaExitTitle Title) {
}

void ASkateScoreChallenge::HalfPipeLeap_Implementation() {
}

void ASkateScoreChallenge::EndLand_Implementation() {
}

void ASkateScoreChallenge::AddSpinR_Implementation() {
}

void ASkateScoreChallenge::AddSpinL_Implementation() {
}

void ASkateScoreChallenge::AddSpinF_Implementation() {
}

void ASkateScoreChallenge::AddSpinB_Implementation() {
}

void ASkateScoreChallenge::AddPlayer_LS312_TripleTower() {
}

void ASkateScoreChallenge::AddPlayer_LS312_HalfPipeLeap() {
}

ASkateScoreChallenge::ASkateScoreChallenge() {
    this->OppSequence = NULL;
    this->TrickUIClass = NULL;
    this->HighScoreUIClass = NULL;
    this->SkateTable = NULL;
    this->DisplayTime = 2.00f;
    this->PointsPerSecond = 83.00f;
}

