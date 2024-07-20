#include "QuestMinigameSaucerBattle.h"

class AActor;
class UQuestActionsComponent;

void AQuestMinigameSaucerBattle::Ticking_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameSaucerBattle::Restart_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameSaucerBattle::OnBossDamaged() {
}

void AQuestMinigameSaucerBattle::Idle_Implementation(UQuestActionsComponent* Actions) {
}

AActor* AQuestMinigameSaucerBattle::GetVehicle() {
    return NULL;
}

void AQuestMinigameSaucerBattle::Completed_Implementation(UQuestActionsComponent* Actions) {
}






AQuestMinigameSaucerBattle::AQuestMinigameSaucerBattle() {
    this->fadeTime = 0.00f;
    this->BlackScreenTime = 0.10f;
    this->BossName = TEXT("Default");
    this->bLeftBossUI = false;
    this->BossHealth = 10;
    this->HealthWidgetClass = NULL;
}

