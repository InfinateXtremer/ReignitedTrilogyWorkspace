#pragma once
#include "CoreMinimal.h"
#include "EFalconCausedDamageType.generated.h"

UENUM(BlueprintType)
enum class EFalconCausedDamageType : uint8 {
    Opponent,
    Ally,
    NoTeam,
};

