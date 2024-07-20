#pragma once
#include "CoreMinimal.h"
#include "EFalconScreenLayerType.generated.h"

UENUM(BlueprintType)
enum class EFalconScreenLayerType : uint8 {
    EFSLT_None,
    EFSLT_Pause,
    EFSLT_Gameplay,
    EFLST_Loading,
    EFSLT_FrontEnd,
    EFLST_Debug,
};

