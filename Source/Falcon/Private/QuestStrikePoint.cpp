#include "QuestStrikePoint.h"

class UQuestMoveTask;

void AQuestStrikePoint::Arriving_Implementation(UQuestMoveTask* moveTask) {
}

AQuestStrikePoint::AQuestStrikePoint() {
    this->bOrientTowardsNextPoint = true;
    this->NextPoint = NULL;
}

