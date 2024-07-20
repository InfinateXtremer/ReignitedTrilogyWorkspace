#include "BattleTankMinigame.h"

class UQuestActionsComponent;

void ABattleTankMinigame::Ticking_Implementation(UQuestActionsComponent* Actions) {
}

void ABattleTankMinigame::StartPart2_Implementation(UQuestActionsComponent* Actions) {
}

void ABattleTankMinigame::StartPart1_Implementation(UQuestActionsComponent* Actions) {
}

void ABattleTankMinigame::StartFree_Implementation(UQuestActionsComponent* Actions) {
}

void ABattleTankMinigame::Idle_Implementation(UQuestActionsComponent* Actions) {
}

void ABattleTankMinigame::Completed_Implementation(UQuestActionsComponent* Actions) {
}







ABattleTankMinigame::ABattleTankMinigame() {
    this->fadeTime = 0.50f;
    this->EnemyClass = NULL;
    this->IconName = TEXT("MobileCannon");
    this->ScoreUIClass = NULL;
    this->ScoreUIPosition = EFalconHudWidgetPosition::EFHP_LowerRight;
}

