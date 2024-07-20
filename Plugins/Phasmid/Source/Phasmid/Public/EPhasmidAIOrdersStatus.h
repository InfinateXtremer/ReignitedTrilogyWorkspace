#pragma once
#include "CoreMinimal.h"
#include "EPhasmidAIOrdersStatus.generated.h"

UENUM(BlueprintType)
enum class EPhasmidAIOrdersStatus : uint8 {
    InProgress,
    Completed,
    Canceled,
    Invalid,
};

