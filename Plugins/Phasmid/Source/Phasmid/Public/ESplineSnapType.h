#pragma once
#include "CoreMinimal.h"
#include "ESplineSnapType.generated.h"

UENUM()
enum class ESplineSnapType : int32 {
    SnapLocationAndRotation,
    SnapRotation,
    None,
};

