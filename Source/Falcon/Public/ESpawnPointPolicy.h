#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointPolicy.generated.h"

UENUM(BlueprintType)
enum class ESpawnPointPolicy : uint8 {
    Random,
    Sequential,
    ClosestToPlayer,
    FurthestFromPlayer,
};

