#include "PhasmidAggroComponent.h"

class AActor;

void UPhasmidAggroComponent::OnActorPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

AActor* UPhasmidAggroComponent::GetCurrentTarget() const {
    return NULL;
}

void UPhasmidAggroComponent::ForgetAllActors() {
}

void UPhasmidAggroComponent::ForgetActor(AActor* Target) {
}

FPhasmidActorAggroBlueprintInfo UPhasmidAggroComponent::ChooseAggroTarget() {
    return FPhasmidActorAggroBlueprintInfo{};
}

void UPhasmidAggroComponent::AddAggro(AActor* Target, int32 Aggro) {
}

UPhasmidAggroComponent::UPhasmidAggroComponent() {
    this->PriorityFactorForPathable = 1.00f;
    this->PriorityFactorForDistance = 1.00f;
    this->PriorityFactorForEncounter = 1.00f;
    this->MaxTargetDistance = 10000.00f;
    this->MaxSimultaneousTargets = 5;
    this->SightWeight = 1.00f;
    this->HearingWeight = 1.00f;
    this->DamageWeight = 1.00f;
    this->CurrentTargetWeight = 1.00f;
    this->bAlerted = false;
    this->bIgnoreUnpathableTargets = false;
}

