#include "EggController.h"

class UQuestActionsComponent;

void AEggController::ZapPlayer_Implementation(const FName& Checkpoint, UQuestActionsComponent* Actions) {
}

void AEggController::SetPosition_Implementation(const FName& where, const FName& moveMode, UQuestActionsComponent* Actions) {
}

void AEggController::Revealed_Implementation(UQuestActionsComponent* Actions) {
}

void AEggController::OutOfWorld_Implementation(UQuestActionsComponent* Actions) {
}

void AEggController::Hidden_Implementation(UQuestActionsComponent* Actions) {
}

void AEggController::GreetPlayer_Implementation(const FGreeting& Greeting, UQuestActionsComponent* Actions) {
}

void AEggController::GiveEgg_Implementation(const FName& egg, UQuestActionsComponent* Actions) {
}


AEggController::AEggController() {
    this->SkipZap = false;
}

