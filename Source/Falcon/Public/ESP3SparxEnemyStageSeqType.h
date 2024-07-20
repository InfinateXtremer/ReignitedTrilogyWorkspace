#pragma once
#include "CoreMinimal.h"
#include "ESP3SparxEnemyStageSeqType.generated.h"

UENUM(BlueprintType)
enum class ESP3SparxEnemyStageSeqType : uint8 {
    TargetSet,
    TargetDistLT,
    TargetDistGT,
    TargetAngLT,
    TargetAngGT,
    SpawnDistLT,
    SpawnDistGT,
    SplineDistLT,
    SplineDistGT,
    HealthLT,
    Timer,
    ShotsEmpty,
    Blueprint,
};

