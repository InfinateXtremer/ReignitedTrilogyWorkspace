#pragma once
#include "CoreMinimal.h"
#include "EFalconMovementMode.generated.h"

UENUM(BlueprintType)
enum class EFalconMovementMode : uint8 {
    None,
    TraverseWaypointsOnce,
    TraverseWaypointsLooped,
    FleeFromPlayer,
    SeekPlayer,
    FacePlayer,
    ReverseTraverseWaypoints,
    ReverseTraverseWaypointsLooped,
    ReturnToOrigin,
    SplineJump,
    Wander,
    LaunchFromDamage,
    ReturnToOriginWithoutFacing,
};

