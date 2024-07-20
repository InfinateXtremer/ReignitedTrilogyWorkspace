#include "SP3_SpawnManagerComponent.h"
#include "Templates/SubclassOf.h"

class AActor;
class ASP3_BossPickupBase;
class UFalconEnemyStateComponent;

void USP3_SpawnManagerComponent::UnregisterActor(AActor* Actor) {
}

AActor* USP3_SpawnManagerComponent::SpawnInstance(TSubclassOf<AActor> ActorClass, const FTransform& Transform) {
    return NULL;
}

void USP3_SpawnManagerComponent::ResetTimeSinceLastSpawn() {
}

void USP3_SpawnManagerComponent::RegisterActor(AActor* Actor) {
}

void USP3_SpawnManagerComponent::PurgeDeadActors() {
}

void USP3_SpawnManagerComponent::OnEnemyComponentDeathState(AActor* Actor, UFalconEnemyStateComponent* StateComponent) {
}

void USP3_SpawnManagerComponent::OnActorEndPlay(AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void USP3_SpawnManagerComponent::OnActorDied(AActor* Actor, const FGameplayEventData Data) {
}

void USP3_SpawnManagerComponent::KillSpawnedActors() {
}

float USP3_SpawnManagerComponent::GetTimeSinceLastSpawn() const {
    return 0.0f;
}

TArray<AActor*> USP3_SpawnManagerComponent::GetSpawnedActors(TSubclassOf<AActor> ActorClass) const {
    return TArray<AActor*>();
}

int32 USP3_SpawnManagerComponent::GetNumSpawnedActors(TSubclassOf<AActor> ActorClass) const {
    return 0;
}

ASP3_BossPickupBase* USP3_SpawnManagerComponent::GetClosestSpawnedBossPickup(const FVector& Position, TSubclassOf<ASP3_BossPickupBase> ActorClass, float MaxRange) const {
    return NULL;
}

AActor* USP3_SpawnManagerComponent::GetClosestSpawnedActor(const FVector& Position, TSubclassOf<AActor> ActorClass, float MaxRange) const {
    return NULL;
}

USP3_SpawnManagerComponent::USP3_SpawnManagerComponent() {
}

