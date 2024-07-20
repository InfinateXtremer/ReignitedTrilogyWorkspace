#include "TfbWEEDSGrassManagerBase.h"

class AActor;
class UMaterialParameterCollection;

void ATfbWEEDSGrassManagerBase::UpdateSpyroTrailInternal() {
}

void ATfbWEEDSGrassManagerBase::UpdateSpyroInteractionsInternal() {
}

void ATfbWEEDSGrassManagerBase::UpdateNearbyActorsInternal() {
}

void ATfbWEEDSGrassManagerBase::UpdateInteractionsInternal() {
}

void ATfbWEEDSGrassManagerBase::UpdateGroundMapOffsets() {
}

void ATfbWEEDSGrassManagerBase::UpdateFireInternal() {
}

void ATfbWEEDSGrassManagerBase::Tick(float DeltaTime) {
}

void ATfbWEEDSGrassManagerBase::ReinitializeLists() {
}

void ATfbWEEDSGrassManagerBase::PatchMaterialOverrides() {
}

bool ATfbWEEDSGrassManagerBase::IsWithEditor() const {
    return false;
}

UMaterialParameterCollection* ATfbWEEDSGrassManagerBase::GetParameterCollection() {
    return NULL;
}

UMaterialParameterCollection* ATfbWEEDSGrassManagerBase::GetOverrideCollection() {
    return NULL;
}

void ATfbWEEDSGrassManagerBase::CalcProjectileImpactInternal(AActor* Projectile, const FVector& StartPos, const float DistanceIn, float& DistanceOut, FVector& EndPosOut) {
}

ATfbWEEDSGrassManagerBase::ATfbWEEDSGrassManagerBase() {
    this->CollisionTraceChannel = TraceTypeQuery1;
    this->SceneCaptureComponentInternal = NULL;
    this->OrthoWidthInternal = 0.00f;
    this->UseExplicitGrassMapBoundsInternal = false;
    this->WorldContextObjectInternal = NULL;
    this->ChannelAllocations.AddDefaulted(6);
    this->InteractionDistance = 1000.00f;
    this->InteractionRadiusScale = 1.10f;
    this->DebugInteractionPositions = false;
    this->NextNearbyActorsUpdateTime = 0.00f;
    this->NearbyActorsUpdateFrequency = 0.50f;
    this->NextInteractionUpdateTime = 0.00f;
    this->InteractionUpdateFrequency = 1.10f;
    this->TrailDebugDraw = false;
    this->TrailDensityScale = 1.50f;
    this->TrailRadiusScale = 1.10f;
    this->TrailLookaheadDist = 5.00f;
    this->TrailShrinkSpeed = 23.00f;
    this->TrailIndex = 0;
    this->FireCharredSources.AddDefaulted(10);
    this->FreeCharMaterialIndices.AddDefaulted(10);
    this->MaxFireRadius = 70.00f;
    this->BurnMoveDuration = 0.01f;
    this->BurnGrowDuration = 0.25f;
    this->BurnHoldDuration = 3.00f;
    this->BurnShrinkDuration = 1.50f;
    this->CharredSpawnLimiter = 0.00f;
    this->MinDistanceFromSpyro = 10.00f;
    this->CharDistanceFromOtherChar = 30.00f;
    this->CullCharredFramesOffsceen = 15;
    this->LastCharredSpawnTime = 0.00f;
    this->DebugDrawCharredSources = false;
}

