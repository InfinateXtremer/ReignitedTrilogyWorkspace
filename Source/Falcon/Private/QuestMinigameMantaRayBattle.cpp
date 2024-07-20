#include "QuestMinigameMantaRayBattle.h"

class AActor;
class UQuestActionsComponent;

void AQuestMinigameMantaRayBattle::Ticking_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameMantaRayBattle::OnGameStateChanged(EFalconGameState PrevState, EFalconGameState NextState) {
}

void AQuestMinigameMantaRayBattle::OnExitTriggerHit(AActor* HitActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AQuestMinigameMantaRayBattle::KnockedOffManta() {
}

void AQuestMinigameMantaRayBattle::IdleFreeSwim_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameMantaRayBattle::Idle_Implementation(UQuestActionsComponent* Actions) {
}

AActor* AQuestMinigameMantaRayBattle::GetMantaRay() {
    return NULL;
}

void AQuestMinigameMantaRayBattle::FreeSwim_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameMantaRayBattle::Completed_Implementation(UQuestActionsComponent* Actions) {
}






AQuestMinigameMantaRayBattle::AQuestMinigameMantaRayBattle() {
    this->EnemyClass = NULL;
    this->SeaweedClass = NULL;
    this->MantaRayClass = NULL;
    this->MantaRayIdleClass = NULL;
    this->fadeTime = 0.00f;
    this->IconName = TEXT("Default");
    this->ScoreUIClass = NULL;
    this->ScoreUIPosition = EFalconHudWidgetPosition::EFHP_LowerRight;
}

