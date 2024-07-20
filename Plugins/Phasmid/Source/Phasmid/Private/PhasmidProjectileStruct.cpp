#include "PhasmidProjectileStruct.h"

FPhasmidProjectileStruct::FPhasmidProjectileStruct() {
    this->Type = EProjectileType::DEFAULT;
    this->ClassOverride = NULL;
    this->bSpawnRelativeToOwner = false;
    this->Orientation = EProjectileOrientation::Manual;
    this->LobType = EProjectileLobType::None;
    this->StaticMesh = NULL;
    this->SkeletalMesh = NULL;
    this->bCheckSpawnThroughWall = false;
    this->TargetActor = NULL;
    this->bUseTargetLocation = false;
    this->SplineTimeCurve = NULL;
    this->RotationVelocityType = EProjectileRotationType::WorldRotation;
    this->AngularVelocity = 0.00f;
    this->bRotationFollowsVelocity = false;
    this->bHomeToPlayer = false;
    this->HorizontalHomingDegreeCurve = NULL;
    this->VerticalHomingDegreeCurve = NULL;
    this->InitialLifeSpan = 0.00f;
    this->InitialSpeed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->bFastMovingEnemyProjectile = false;
    this->bAddOwnerHorizontalSpeed = false;
    this->GravityScale = 0.00f;
    this->bDestroyOnCollision = false;
    this->bExpireWhenOffScreen = false;
    this->bShouldBounce = false;
    this->bShouldBounceOffAllImmune = false;
    this->BounceRadius = 0.00f;
    this->bBounceAngleAffectsFriction = false;
    this->Bounciness = 0.00f;
    this->BounceFriction = 0.00f;
    this->BounceVelocityStopSimulatingThreshold = 0.00f;
    this->BounceStopMovingImpactEffect = EProjectileImpactType::OnImpactEffect;
    this->ExplosionRadius = 0.00f;
    this->ExplosionDuration = 0.00f;
    this->bExplodeBouncingOnStopMovement = false;
    this->OnSpawnAudioEvent = NULL;
    this->PersistentAudioEvent = NULL;
    this->OnHitAudioEvent = NULL;
    this->ImpactDecalClass = NULL;
    this->OnExpireAudioEvent = NULL;
}

