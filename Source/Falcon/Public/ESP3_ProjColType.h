#pragma once
#include "CoreMinimal.h"
#include "ESP3_ProjColType.generated.h"

UENUM(BlueprintType)
enum class ESP3_ProjColType : uint8 {
    Default,
    ReflectStatic,
    ReflectAll,
    Return,
    Attach,
    Ignore,
    ESP3_MAX UMETA(Hidden),
};

