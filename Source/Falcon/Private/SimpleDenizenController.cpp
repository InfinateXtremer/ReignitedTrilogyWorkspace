#include "SimpleDenizenController.h"

class UQuestActionsComponent;

void ASimpleDenizenController::ZapPlayer_Implementation(const FName& Checkpoint, UQuestActionsComponent* Actions) {
}

bool ASimpleDenizenController::SyncFalconStates(FName QuestState) {
    return false;
}

void ASimpleDenizenController::SayToPlayer_Implementation(const FDialogText& Text, UQuestActionsComponent* Actions) {
}

void ASimpleDenizenController::OutOfWorld_Implementation(UQuestActionsComponent* Actions) {
}

void ASimpleDenizenController::Idle_Implementation(UQuestActionsComponent* Actions) {
}

void ASimpleDenizenController::Hidden_Implementation(UQuestActionsComponent* Actions) {
}

void ASimpleDenizenController::GreetPlayer_Implementation(const FGreeting& G, UQuestActionsComponent* Actions) {
}

void ASimpleDenizenController::ChangeState_Implementation(const FName& State, UQuestActionsComponent* Actions) {
}

void ASimpleDenizenController::Captured_Implementation(UQuestActionsComponent* Actions) {
}

ASimpleDenizenController::ASimpleDenizenController() {
    this->PressToTalk = NULL;
    this->m_ambientMontage = NULL;
}

