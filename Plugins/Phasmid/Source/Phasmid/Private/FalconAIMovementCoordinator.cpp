#include "FalconAIMovementCoordinator.h"

class AActor;

void UFalconAIMovementCoordinator::LaunchLandCompleted(const FHitResult& Hit) {
}

void UFalconAIMovementCoordinator::LaunchCompleted(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

UFalconAIMovementCoordinator::UFalconAIMovementCoordinator() {
    this->bOverridePhysBlend = false;
    this->bDebug_EnableNewSplineMovement = false;
    this->bReachTestIncludesAgentRadius = true;
    this->bStopAtClosestPoint = true;
    this->bOverrideOrientToMovement = true;
    this->SeekAcceptRadius = 25.00f;
    this->bDebug_DrawSeekBehavior = false;
    this->FleeCheckRadius = 500.00f;
    this->FleeCheckHalfAngle = 45.00f;
    this->FleeDebounceTime = 1.00f;
    this->bDontStopFleeing = false;
    this->WanderBFactor = 1.00f;
    this->WanderMinTurnTime = 0.52f;
    this->WanderMaxTurnTime = 2.36f;
    this->WanderMinStraightTime = 1.00f;
    this->WanderMaxStraightTime = 4.00f;
    this->WanderReturnStrScale = 1.00f;
    this->WanderReturnStrExp = 16.00f;
    this->bWanderTriggerMoveDone = true;
    this->bDebug_DrawWanderBehvior = false;
    this->bUsePathfindingToSpline = true;
    this->bSetEventStartKeyOnFollowEvent = true;
    this->CurrentMoveTask = NULL;
}

