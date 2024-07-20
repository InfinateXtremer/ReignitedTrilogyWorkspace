#pragma once
#include "CoreMinimal.h"
#include "EFalconTimeBarType.generated.h"

UENUM(BlueprintType)
enum class EFalconTimeBarType : uint8 {
    EFTBT_Invincible,
    EFTBT_Powerflame,
    EFTBT_Superfly,
    EFTBT_PowerflameBlue,
    EFTBT_PowerflameGreen,
    EFTBT_MAX UMETA(Hidden),
};

