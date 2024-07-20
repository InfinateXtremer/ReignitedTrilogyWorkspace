#pragma once
#include "CoreMinimal.h"
#include "EGraphicsQuality.generated.h"

UENUM(BlueprintType)
enum class EGraphicsQuality : uint8 {
    QUALITY_LOW,
    QUALITY_MEDIUM,
    QUALITY_HIGH,
    QUALITY_ULTRA,
    QUALITY_INVALID,
    QUALITY_MAX UMETA(Hidden),
};

