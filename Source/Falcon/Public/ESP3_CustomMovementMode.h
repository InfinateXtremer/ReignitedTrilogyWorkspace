#pragma once
#include "CoreMinimal.h"
#include "ESP3_CustomMovementMode.generated.h"

UENUM(BlueprintType)
enum class ESP3_CustomMovementMode : uint8 {
    Skateboard,
    ESP3_MAX UMETA(Hidden),
};

