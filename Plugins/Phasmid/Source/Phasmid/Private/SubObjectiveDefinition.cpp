#include "SubObjectiveDefinition.h"

FSubObjectiveDefinition::FSubObjectiveDefinition() {
    this->ObjectiveGoal = 0;
    this->SubObjectiveType = ESubObjectiveType::SubObjectiveType_Timer;
    this->AddByDefault = false;
    this->AutoComplete = false;
}

