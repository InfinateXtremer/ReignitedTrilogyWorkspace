#pragma once
#include "CoreMinimal.h"
#include "ETrickStatus.generated.h"

UENUM(BlueprintType)
enum class ETrickStatus : uint8 {
    Pending,
    Landed,
    Error,
};

