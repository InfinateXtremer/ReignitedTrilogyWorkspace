#include "PlayableController.h"

class AActor;
class ACharacter;
class UQuestActionsComponent;

void APlayableController::ZapPlayer_Implementation(const FName& Checkpoint, UQuestActionsComponent* Actions) {
}

void APlayableController::SetPosition_Implementation(const FName& where, const FName& moveMode, UQuestActionsComponent* Actions) {
}

void APlayableController::OnTakeDamage(AActor* sender, const FGameplayEventData Payload) {
}

void APlayableController::onSkateEvent(EPCMSkateEventType evtType, FName Name) {
}

void APlayableController::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void APlayableController::OnDeath(AActor* sender, const FGameplayEventData Payload) {
}

void APlayableController::MoveTo_Implementation(const FName& where, UQuestActionsComponent* Actions) {
}

void APlayableController::FadeOut_Implementation(float Duration, UQuestActionsComponent* Actions) {
}

void APlayableController::FadeIn_Implementation(float Duration, UQuestActionsComponent* Actions) {
}

APlayableController::APlayableController() {
    this->bUseDamageSignals = false;
    this->m_pc = NULL;
}

