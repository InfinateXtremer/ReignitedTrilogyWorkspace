#pragma once
#include "CoreMinimal.h"
#include "EHudHealthCountState.generated.h"

UENUM(BlueprintType)
enum class EHudHealthCountState : uint8 {
    EHCS_InIdle,
    EHCS_OutIdle,
    EHCS_AnimIn,
    EHCS_AnimOut,
    EHCS_AnimOrbs,
    EHCS_HudControl,
    EHCS_MAX UMETA(Hidden),
};

