#pragma once
#include "CoreMinimal.h"
#include "ERK4SpringAxis.generated.h"

UENUM(BlueprintType)
enum class ERK4SpringAxis : uint8 {
    X_Positive,
    X_Negative,
    Y_Positive,
    Y_Negative,
    Z_Positive,
    Z_Negative,
};

