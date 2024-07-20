#pragma once
#include "CoreMinimal.h"
#include "EAutoGreet.generated.h"

UENUM(BlueprintType)
enum class EAutoGreet : uint8 {
    Always,
    Default,
    Force,
    Never,
    Regreet,
};

