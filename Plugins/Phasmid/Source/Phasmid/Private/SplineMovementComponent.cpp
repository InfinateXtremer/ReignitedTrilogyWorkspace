#include "SplineMovementComponent.h"

class AActor;
class USplineComponent;

void USplineMovementComponent::SetSplineTime(float Time, bool bNewMove) {
}

bool USplineMovementComponent::SetFollowSplineByName(AActor* SplineHolder, const FName& SplineName) {
    return false;
}

void USplineMovementComponent::SetFollowSpline(USplineComponent* Spline) {
}

void USplineMovementComponent::Client_FollowSplineWithParams_Implementation(USplineComponent* Spline, bool bReverseSpline, bool bLooping, bool bStartAtNearestWaypoint, float TimeOffset) {
}

USplineMovementComponent::USplineMovementComponent() {
    this->bStartAtClosestPoint = false;
    this->SnapToSpline = ESplineSnapType::SnapLocationAndRotation;
    this->bRotateWithSpline = true;
    this->bMove = true;
    this->bSweepOnMove = true;
    this->bClampTime = false;
    this->InitialSplineActor = NULL;
    this->FollowType = EFollowSplineType::Once;
    this->OverrideSplineTime = 0.00f;
    this->SplineTimeCurve = NULL;
    this->bSyncToWorldTime = true;
}

