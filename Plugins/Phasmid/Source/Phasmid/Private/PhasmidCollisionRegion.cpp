#include "PhasmidCollisionRegion.h"
#include "Components/SphereComponent.h"
#include "PhasmidAbilitySystemComponent.h"

class AActor;
class APhasmidCollisionRegion;
class UPrimitiveComponent;

void APhasmidCollisionRegion::Spawn(bool bEnableCollision) {
}

void APhasmidCollisionRegion::SetupSphere(const FPhasmidCollisionStruct& CollisionData) {
}

void APhasmidCollisionRegion::SetupPrimitiveComponent(UPrimitiveComponent* Primitive) {
}

void APhasmidCollisionRegion::SetupFromCollisionStruct(const FPhasmidCollisionStruct& CollisionData) {
}

void APhasmidCollisionRegion::SetupCapsule(const FPhasmidCollisionStruct& CollisionData) {
}

void APhasmidCollisionRegion::SetupBox(const FPhasmidCollisionStruct& CollisionData) {
}

void APhasmidCollisionRegion::SetRegionOwner(AActor* NewOwner) {
}


void APhasmidCollisionRegion::OnComponentOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APhasmidCollisionRegion::OnCollisionRegionOverlap(APhasmidCollisionRegion* Region, AActor* OverlappedActor, UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit) {
}

void APhasmidCollisionRegion::EnableCollision() {
}

bool APhasmidCollisionRegion::CanHitActor(AActor* Actor, UPrimitiveComponent* HitComponent) {
    return false;
}

APhasmidCollisionRegion::APhasmidCollisionRegion() {
    this->AnimationId = 0.00f;
    this->SpawningAnimation = NULL;
    this->bEnableOnPlay = true;
    this->CollisionFilter = ECollisionRegionFilter::OtherTeamOnly;
    this->bCollideWithOwner = false;
    this->AbilitySystemComponent = CreateDefaultSubobject<UPhasmidAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->CollisionInterval = 0.00f;
    this->EndCollisionInterval = 0.00f;
    this->CollisionMagnitude = 1.00f;
    this->OverrideLifeTime = 0.00f;
    this->bInteractWithWalls = false;
    this->bHideActorOnRelease = true;
    this->bSkipDamageExecution = false;
    this->RegionOwner = NULL;
    this->Shape = ECollisionRegionShape::Sphere;
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("DefaultCollisionComponent"));
}

