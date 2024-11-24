#pragma once
#include "CoreMinimal.h"
#include "EFalconTargetType.generated.h"

UENUM(BlueprintType)
enum class EFalconTargetType : uint8 {
    Player,
    Origin,
    Waypoint,
    Target,
    Myself,
};

