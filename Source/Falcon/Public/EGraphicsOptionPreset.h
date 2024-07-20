#pragma once
#include "CoreMinimal.h"
#include "EGraphicsOptionPreset.generated.h"

UENUM(BlueprintType)
enum class EGraphicsOptionPreset : uint8 {
    PRESET_LOW,
    PRESET_MEDIUM,
    PRESET_HIGH,
    PRESET_ULTRA,
    PRESET_CUSTOM,
    PRESET_INVALID,
    PRESET_MAX UMETA(Hidden),
};

