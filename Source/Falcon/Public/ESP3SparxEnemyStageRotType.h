#pragma once
#include "CoreMinimal.h"
#include "ESP3SparxEnemyStageRotType.generated.h"

UENUM(BlueprintType)
enum class ESP3SparxEnemyStageRotType : uint8 {
    Fixed,
    RelVelocity,
    RelMove,
    RelSpawn,
    RelWorld,
    RelSpline,
    ToTarget,
    ToSpawn,
    ToSpline,
};

