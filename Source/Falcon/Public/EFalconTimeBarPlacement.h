#pragma once
#include "CoreMinimal.h"
#include "EFalconTimeBarPlacement.generated.h"

UENUM(BlueprintType)
enum class EFalconTimeBarPlacement : uint8 {
    EFTBP_Normal,
    EFTBP_BossBattle,
    EFTBP_Sparx,
    EFTBP_MAX UMETA(Hidden),
};

