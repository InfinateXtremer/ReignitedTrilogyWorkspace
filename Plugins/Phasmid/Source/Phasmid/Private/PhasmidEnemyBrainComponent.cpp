#include "PhasmidEnemyBrainComponent.h"

void UPhasmidEnemyBrainComponent::FinishScriptedBehavior() {
}

void UPhasmidEnemyBrainComponent::BeginScriptedBehavior() {
}

UPhasmidEnemyBrainComponent::UPhasmidEnemyBrainComponent() {
    this->Blackboard = NULL;
    this->bEnableUtilityBehaviorSelection = false;
    this->bUnderScriptControl = false;
}

