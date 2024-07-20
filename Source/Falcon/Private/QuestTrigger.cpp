#include "QuestTrigger.h"

class APawn;

void AQuestTrigger::SetVisited(bool visited) {
}

void AQuestTrigger::PlayerVisited_Implementation(APawn* thePlayer) {
}

FName AQuestTrigger::GetTriggerName() const {
    return NAME_None;
}

AQuestTrigger::AQuestTrigger() {
    this->m_levelActor = NULL;
}

