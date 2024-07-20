#pragma once
#include "CoreMinimal.h"
#include "EPhasmidWaveSpawnerState.generated.h"

UENUM(BlueprintType)
enum class EPhasmidWaveSpawnerState : uint8 {
    WaitingToActivate,
    Active,
    Paused,
    Finished,
};

