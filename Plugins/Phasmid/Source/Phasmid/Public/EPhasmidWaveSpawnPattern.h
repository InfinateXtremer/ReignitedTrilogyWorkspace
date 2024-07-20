#pragma once
#include "CoreMinimal.h"
#include "EPhasmidWaveSpawnPattern.generated.h"

UENUM(BlueprintType)
enum class EPhasmidWaveSpawnPattern : uint8 {
    Sequential,
    Shuffle,
    Random,
};

