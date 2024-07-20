#include "SignpostController.h"

class UQuestActionsComponent;

void ASignpostController::SayToPlayer_Implementation(const FDialogText& Text, UQuestActionsComponent* Actions) {
}

void ASignpostController::Legible_Implementation(UQuestActionsComponent* Actions) {
}


void ASignpostController::GreetPlayer_Implementation(const FGreeting& Greeting, UQuestActionsComponent* Actions) {
}

ASignpostController::ASignpostController() {
    this->PressToTalk = NULL;
}

