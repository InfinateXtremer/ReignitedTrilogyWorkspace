#pragma once
#include "CoreMinimal.h"
#include "EHudGemCountDisplayState.generated.h"

UENUM(BlueprintType)
enum class EHudGemCountDisplayState : uint8 {
    EHGCDS_OutIdle,
    EHGCDS_AnimIn,
    EHGCDS_InIdle,
    EHGCDS_AnimOut,
    EHGCDS_HudControl,
    EHGCDS_MAX UMETA(Hidden),
};

