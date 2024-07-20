#pragma once
#include "CoreMinimal.h"
#include "EFlightLevelResult.generated.h"

UENUM(BlueprintType)
enum class EFlightLevelResult : uint8 {
    EFLR_Crash,
    EFLR_Timeout,
    EFLR_Success,
    EFLR_Quit,
    EFLR_OffCourse,
    EFLR_MAX UMETA(Hidden),
};

