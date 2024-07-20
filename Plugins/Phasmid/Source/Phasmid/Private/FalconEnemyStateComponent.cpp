#include "FalconEnemyStateComponent.h"

class AActor;
class ATargetPoint;

bool UFalconEnemyStateComponent::WillSpawnCollectibleOfType(UClass* Class) {
    return false;
}

FName UFalconEnemyStateComponent::GetStateName() {
    return NAME_None;
}

void UFalconEnemyStateComponent::BP_UpdateWanderParams(float Delay, float OuterRadius, float TurnRate) {
}

void UFalconEnemyStateComponent::BP_SetWaypoints(ATargetPoint* Points) {
}

void UFalconEnemyStateComponent::BP_SetTarget(AActor* Actor) {
}



void UFalconEnemyStateComponent::BP_AddActorToWatchListByIndex(int32 Index, AActor* Actor) {
}

void UFalconEnemyStateComponent::BP_AddActorToWatchList(FName NextStateName, AActor* Actor) {
}

bool UFalconEnemyStateComponent::AllLootCollected() {
    return false;
}

UFalconEnemyStateComponent::UFalconEnemyStateComponent() {
}

