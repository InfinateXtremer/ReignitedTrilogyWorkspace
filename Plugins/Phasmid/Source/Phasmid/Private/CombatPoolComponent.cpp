#include "CombatPoolComponent.h"
#include "Templates/SubclassOf.h"

class AActor;
class APhasmidCollisionRegion;
class APhasmidProjectileActor;

void UCombatPoolComponent::SpawnSplineProjectileRegion() {
}

void UCombatPoolComponent::SpawnProjectileRegion() {
}

void UCombatPoolComponent::SpawnPooledActor(UClass* Class) {
}

void UCombatPoolComponent::SpawnCollisionRegion() {
}

void UCombatPoolComponent::SpawnBlueprintProjectileRegion(UClass* Class) {
}

void UCombatPoolComponent::ReleaseRegion(APhasmidCollisionRegion* Region) {
}

void UCombatPoolComponent::ReleaseProjectile(APhasmidProjectileActor* Projectile) {
}

TArray<AActor*> UCombatPoolComponent::GetAllPooledActorsOfClass(TSubclassOf<AActor> ActorClass) {
    return TArray<AActor*>();
}

APhasmidCollisionRegion* UCombatPoolComponent::AcquireRegion(const FPhasmidCollisionStruct& Data, const FTransform& Transform) {
    return NULL;
}

APhasmidProjectileActor* UCombatPoolComponent::AcquireProjectile(const FPhasmidProjectileStruct& Data, const FTransform& Transform) {
    return NULL;
}

UCombatPoolComponent::UCombatPoolComponent() {
    this->RegionCount = 0;
    this->ProjectileCount = 0;
    this->SplineProjectileCount = 0;
    this->bForceSpawningRegionDuringInit = false;
    this->bGuaranteeAcquirePooled = false;
}

