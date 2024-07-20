#pragma once
#include "CoreMinimal.h"
#include "EEnemyDebugDrawOverrideType.generated.h"

UENUM(BlueprintType)
enum class EEnemyDebugDrawOverrideType : uint8 {
    EEDDO_None,
    EEDDO_On,
    EEDDO_Off,
    EEDDO_MAX UMETA(Hidden),
};

