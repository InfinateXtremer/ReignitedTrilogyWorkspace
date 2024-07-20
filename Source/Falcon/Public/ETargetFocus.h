#pragma once
#include "CoreMinimal.h"
#include "ETargetFocus.generated.h"

UENUM(BlueprintType)
enum class ETargetFocus : uint8 {
    NoFocus,
    ConditionalFocus,
    KeepFocus,
    ConditionalRelease,
    ReleaseFocus,
};

