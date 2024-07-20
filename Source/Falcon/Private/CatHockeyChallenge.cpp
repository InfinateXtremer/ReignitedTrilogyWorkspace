#include "CatHockeyChallenge.h"

class AActor;
class UQuestActionsComponent;

void ACatHockeyChallenge::Ticking_Implementation(UQuestActionsComponent* Actions) {
}

void ACatHockeyChallenge::ScorePlayer(AActor* Actor, bool IsPlayerGoal) {
}

void ACatHockeyChallenge::Idle_Implementation(UQuestActionsComponent* Actions) {
}

void ACatHockeyChallenge::Completed_Implementation(UQuestActionsComponent* Actions) {
}

ACatHockeyChallenge::ACatHockeyChallenge() {
    this->EndGamePoint = NULL;
    this->PlayerStartPoint = NULL;
    this->EnemyStartPoint = NULL;
    this->CatStartPoint = NULL;
    this->PlayerGoalPeg = NULL;
    this->EnemyGoalPeg = NULL;
    this->EnemyPawn = NULL;
    this->CatClass = NULL;
    this->GoalsToScore = 5;
    this->MaxCatsOnField = 5;
    this->CatSpawnDelay = 1.00f;
    this->ScoreUIClass = NULL;
    this->PlayerIconName = TEXT("Spyro");
    this->PlayerScoreUIPosition = EFalconHudWidgetPosition::EFHP_LowerLeft;
    this->EnemyIconName = TEXT("RhynocHockey");
    this->EnemyScoreUIPosition = EFalconHudWidgetPosition::EFHP_LowerRight;
    this->fadeTime = 1.00f;
}

