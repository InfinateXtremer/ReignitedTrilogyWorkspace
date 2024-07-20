#include "PhasmidProjectileActor.h"

class AActor;
class APhasmidCollisionRegion;
class UPrimitiveComponent;




void APhasmidProjectileActor::OnExplosionExpired() {
}

void APhasmidProjectileActor::OnCollisionRegionOverlap(APhasmidCollisionRegion* Region, AActor* OverlappedActor, UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit) {
}

APhasmidProjectileActor::APhasmidProjectileActor() {
    this->MoveComponent = NULL;
    this->MeshComponent = NULL;
    this->AudioComponent = NULL;
    this->ImpactDecalClass = NULL;
    this->PersistentEmitter = NULL;
    this->OnHitAudioEvent = NULL;
    this->OnExpireAudioEvent = NULL;
    this->RotationVelocityType = EProjectileRotationType::WorldRotation;
    this->AngularVelocity = 0.00f;
    this->BounceStopMovingImpactEffect = EProjectileImpactType::OnImpactEffect;
    this->ExplosionRadius = 0.00f;
    this->ExplosionDuration = 0.00f;
    this->bExplodeBouncingOnStopMovement = false;
    this->ProjectileMeshStartScale = 1.00f;
}

