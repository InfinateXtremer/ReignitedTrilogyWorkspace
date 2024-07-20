#pragma once
#include "CoreMinimal.h"
#include "ESP3_ProjType.generated.h"

UENUM(BlueprintType)
enum class ESP3_ProjType : uint8 {
    Default,
    Rocket,
    Arrow,
    ESP3_MAX UMETA(Hidden),
};

