

#include "PhasmidCollisionRegion.h"

void APhasmidCollisionRegion::Spawn(bool bEnableCollision)
{
}

void APhasmidCollisionRegion::SetupSphere(const FPhasmidCollisionStruct & CollisionData)
{
}

void APhasmidCollisionRegion::SetupPrimitiveComponent(UPrimitiveComponent * Primitive)
{
}

void APhasmidCollisionRegion::SetupFromCollisionStruct(const FPhasmidCollisionStruct & CollisionData)
{
}

void APhasmidCollisionRegion::SetupCapsule(const FPhasmidCollisionStruct & CollisionData)
{
}

void APhasmidCollisionRegion::SetupBox(const FPhasmidCollisionStruct & CollisionData)
{
}

void APhasmidCollisionRegion::SetRegionOwner(AActor * NewOwner)
{
}

void APhasmidCollisionRegion::ReceiveOnLifeSpanExpired()
{
}

void APhasmidCollisionRegion::OnComponentOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
}

void APhasmidCollisionRegion::OnCollisionRegionOverlap(APhasmidCollisionRegion * Region, AActor * OverlappedActor, UPrimitiveComponent * OverlappedComponent, const FHitResult & Hit)
{
}

void APhasmidCollisionRegion::EnableCollision()
{
}

bool APhasmidCollisionRegion::CanHitActor(AActor * Actor, UPrimitiveComponent * HitComponent)
{
	return false;
}
