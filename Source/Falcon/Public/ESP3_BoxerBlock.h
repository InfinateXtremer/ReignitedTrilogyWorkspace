#pragma once
#include "CoreMinimal.h"
#include "ESP3_BoxerBlock.generated.h"

UENUM(BlueprintType)
enum class ESP3_BoxerBlock : uint8 {
    None,
    Low,
    High,
    ESP3_MAX UMETA(Hidden),
};

