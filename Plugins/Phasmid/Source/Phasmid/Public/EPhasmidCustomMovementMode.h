#pragma once
#include "CoreMinimal.h"
#include "EPhasmidCustomMovementMode.generated.h"

UENUM(BlueprintType)
enum class EPhasmidCustomMovementMode : uint8 {
    Blueprint,
    Spline,
    WallRun,
    Slide,
    Skateboard,
    SplineJump,
    AIJump,
};

