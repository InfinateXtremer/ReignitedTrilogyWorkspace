#pragma once
#include "CoreMinimal.h"
#include "EProcChainAxis.generated.h"

UENUM(BlueprintType)
enum class EProcChainAxis : uint8 {
    X_Positive,
    X_Negative,
    Y_Positive,
    Y_Negative,
    Z_Positive,
    Z_Negative,
};

