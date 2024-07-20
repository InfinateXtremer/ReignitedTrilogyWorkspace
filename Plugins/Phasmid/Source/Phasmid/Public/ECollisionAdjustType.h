#pragma once
#include "CoreMinimal.h"
#include "ECollisionAdjustType.generated.h"

UENUM(BlueprintType)
enum class ECollisionAdjustType : uint8 {
    None,
    ZOffset,
    HitOffset,
};

