#pragma once
#include "CoreMinimal.h"
#include "EPhasmidPathFlags.generated.h"

UENUM(BlueprintType)
enum class EPhasmidPathFlags : uint8 {
    None,
    ReverseDirection,
    LoopPath,
    StartAtNearest,
    AutoDirection,
    UsePathfindingToSpline,
    ResetSplineStartKey,
    LookAtFacingTarget,
};

