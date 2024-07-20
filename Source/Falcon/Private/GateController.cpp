#include "GateController.h"

class UQuestActionsComponent;

void AGateController::Open_Implementation(UQuestActionsComponent* Actions) {
}

bool AGateController::IsOpen() const {
    return false;
}

void AGateController::GreetPlayer_Implementation(const FGreeting& Greeting, UQuestActionsComponent* Actions) {
}

void AGateController::Closed_Implementation(UQuestActionsComponent* Actions) {
}

AGateController::AGateController() {
    this->m_requirements = NULL;
    this->m_blocker = NULL;
}

