#pragma once
#include "CoreMinimal.h"
#include "EFalconTargetType.generated.h"

UENUM()
enum class EFalconTargetType : int32 {
    Player,
    Origin,
    Waypoint,
    Target,
    Myself,
};

