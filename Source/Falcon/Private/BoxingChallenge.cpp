#include "BoxingChallenge.h"

class UQuestActionsComponent;
class USP3_BoxerComponent;

void ABoxingChallenge::Ticking_Implementation(UQuestActionsComponent* Actions) {
}

void ABoxingChallenge::RxLevelSeqFinished() {
}

void ABoxingChallenge::RxBoxerVFXEvent(USP3_BoxerComponent* boxer, FName evtName, const FTransform& xfm, FName param0, float param1) {
}




void ABoxingChallenge::Idle_Implementation(UQuestActionsComponent* Actions) {
}

void ABoxingChallenge::Completed_Implementation(UQuestActionsComponent* Actions) {
}

ABoxingChallenge::ABoxingChallenge() {
    this->Opponent = NULL;
    this->Coach = NULL;
    this->Camera = NULL;
    this->CornerBlue = NULL;
    this->CornerRed = NULL;
    this->CoachCorner = NULL;
    this->CoachWatch = NULL;
    this->NumRounds = 1;
    this->RoundLength = 120.00f;
    this->PlyrHealth = 60.00f;
    this->OppHealth = 25.00f;
    this->CornerHeal = 15.00f;
    this->BonusRoundNum = -1;
    this->BonusSkillPoint = ESkillPoint::ESPT_Invalid;
    this->VictoryTime = 3.50f;
    this->RoundOverTime = 1.50f;
    this->fadeTime = 0.50f;
}

