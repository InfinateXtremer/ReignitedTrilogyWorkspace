#pragma once
#include "CoreMinimal.h"
#include "EFalconHudWidgetPosition.generated.h"

UENUM(BlueprintType)
enum class EFalconHudWidgetPosition : uint8 {
    EFHP_UpperLeft,
    EFHP_UpperRight,
    EFHP_LowerLeft,
    EFHP_LowerRight,
    EFHP_LowerCenter,
    EFHP_MAX UMETA(Hidden),
};

