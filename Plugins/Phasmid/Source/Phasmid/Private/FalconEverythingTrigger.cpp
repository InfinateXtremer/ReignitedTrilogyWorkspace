#include "FalconEverythingTrigger.h"

FFalconEverythingTrigger::FFalconEverythingTrigger() {
    this->bChooseRandomNextState = false;
    this->TriggerType = 0;
    this->bLogicalAndTrigger = false;
    this->Time = 0.00f;
    this->Distance = 0.00f;
    this->DistanceTarget = EFalconTargetType::Player;
    this->CausedDamageTargetType = 0;
    this->bWatchSpawns = false;
    this->bWatchCollectibles = false;
    this->WatchListCompareValue = 0;
    this->CollisionVolumeTarget = EFalconTargetType::Player;
    this->SightTarget = EFalconTargetType::Player;
    this->HitPoints = 0;
    this->SplinePointIndex = 0;
    this->bReachedSplineIndex = false;
    this->bConsumeSignals = false;
    this->bDontResetTrigger = false;
    this->bAdjustForActorTimeDilation = false;
    this->bRestrictVerticalDistance = false;
    this->DistanceAboveGround = 0.00f;
    this->DistanceBelowGround = 0.00f;
}

