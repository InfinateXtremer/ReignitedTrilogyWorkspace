#include "QuestMinigameSubmarine.h"

class AActor;
class UQuestActionsComponent;

void AQuestMinigameSubmarine::StartPart2_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameSubmarine::StartPart1_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameSubmarine::StartFree_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameSubmarine::OnSequenceStopped() {
}

void AQuestMinigameSubmarine::onQuestAreaExitRequested(EFalconAreaExitTitle Title) {
}

void AQuestMinigameSubmarine::OnActorBeginOverlapExitVolume(AActor* OverlappedActor, AActor* OtherActor) {
}

void AQuestMinigameSubmarine::Idle_Implementation(UQuestActionsComponent* Actions) {
}

void AQuestMinigameSubmarine::Completed_Implementation(UQuestActionsComponent* Actions) {
}


AQuestMinigameSubmarine::AQuestMinigameSubmarine() {
    this->SubmarineClass = NULL;
    this->StartPoint = NULL;
    this->ExitVolume = NULL;
    this->fadeTime = 1.00f;
    this->ExitOnCompletion = true;
    this->LetQuestFadeIn = false;
    this->EnemyClass = NULL;
    this->IconName = TEXT("Submarine");
    this->ScoreUIClass = NULL;
    this->ScoreUIPosition = EFalconHudWidgetPosition::EFHP_LowerRight;
}

