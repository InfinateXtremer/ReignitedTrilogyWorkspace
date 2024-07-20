#pragma once
#include "CoreMinimal.h"
#include "EPhasmidWaveSpawnerCommand.generated.h"

UENUM(BlueprintType)
enum class EPhasmidWaveSpawnerCommand : uint8 {
    Activate,
    Finish,
    NextWave,
    Pause,
    UnPause,
};

