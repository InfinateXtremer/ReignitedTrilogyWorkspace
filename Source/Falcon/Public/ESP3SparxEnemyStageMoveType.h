#pragma once
#include "CoreMinimal.h"
#include "ESP3SparxEnemyStageMoveType.generated.h"

UENUM(BlueprintType)
enum class ESP3SparxEnemyStageMoveType : uint8 {
    Fixed,
    RelCurrent,
    RelSpawn,
    RelWorld,
    ToTarget,
    FleeTarget,
    ToSpawn,
    ToSpline,
    SplineChase,
    SplineFlee,
    SplineLoop,
    SplinePong,
};

