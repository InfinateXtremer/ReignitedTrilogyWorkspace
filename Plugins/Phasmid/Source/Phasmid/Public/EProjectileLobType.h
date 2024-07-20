#pragma once
#include "CoreMinimal.h"
#include "EProjectileLobType.generated.h"

UENUM(BlueprintType)
enum class EProjectileLobType : uint8 {
    None,
    KeepAngle,
    KeepVelocity,
    KeepVelocity_HighArc,
};

