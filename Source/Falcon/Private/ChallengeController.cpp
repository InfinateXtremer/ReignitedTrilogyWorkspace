#include "ChallengeController.h"

class UQuestActionsComponent;

void AChallengeController::TimerTick_Implementation(float dt) {
}

void AChallengeController::Ticking_Implementation(UQuestActionsComponent* Actions) {
}

void AChallengeController::StartChallengeTimer_Implementation(UQuestActionsComponent* Actions) {
}

void AChallengeController::Idle_Implementation(UQuestActionsComponent* Actions) {
}

void AChallengeController::Expired_Implementation(UQuestActionsComponent* Actions) {
}

void AChallengeController::Completed_Implementation(UQuestActionsComponent* Actions) {
}

AChallengeController::AChallengeController() {
    this->IconName = TEXT("Default");
    this->TimerUIClass = NULL;
    this->ScoreUIClass = NULL;
    this->ScoreUIPosition = EFalconHudWidgetPosition::EFHP_LowerRight;
    this->AutoHideDelay = 0.00f;
    this->DisplaysCounterOnChallengeStart = true;
    this->DisplaysScoreCounter = true;
    this->CameraClass = NULL;
    this->CameraInterpTime = 0.00f;
    this->AwardsSkillPoint = ESkillPoint::ESPT_Invalid;
    this->Goal = 0;
    this->bInfiniteTimer = false;
    this->bScored = false;
    this->HighScorePrev = 0;
    this->TimerDuration = 0.00f;
    this->ChallengeTimer = NULL;
    this->TimerComponent = NULL;
    this->ScoreComponent = NULL;
}

