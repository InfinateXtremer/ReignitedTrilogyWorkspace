#pragma once
#include "CoreMinimal.h"
#include "EImageSize.generated.h"

UENUM(BlueprintType)
enum class EImageSize : uint8 {
    Small = 0x1,
    Medium,
    Large,
    ExtraLarge,
};

