#include "FalconEverythingState.h"

FFalconEverythingState::FFalconEverythingState() {
    this->Montage = NULL;
    this->MontageStartOffsetPercentage = 0.00f;
    this->MovementMode = EFalconMovementMode::None;
    this->MovementTarget = EFalconTargetType::Player;
    this->FacingMode = EFalconFacingMode::None;
    this->FacingTarget = EFalconTargetType::Player;
    this->Target = NULL;
    this->Waypoints = NULL;
    this->SpawnActorClass = NULL;
    this->bResetGlobalTriggers = false;
    this->bDestroySelfOnExit = false;
    this->bDisableCollision = false;
    this->bDisableAnimation = false;
    this->bStartAtNearestWaypoint = false;
    this->bKeepVelocityOnStateChange = false;
    this->WanderDelay = 0.00f;
    this->WanderOuterRadius = 0.00f;
    this->WanderTurnRate = 0.00f;
    this->ActorTickIntervalOverride = 0.00f;
}

