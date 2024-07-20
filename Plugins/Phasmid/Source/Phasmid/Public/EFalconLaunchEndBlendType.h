#pragma once
#include "CoreMinimal.h"
#include "EFalconLaunchEndBlendType.generated.h"

UENUM(BlueprintType)
enum class EFalconLaunchEndBlendType : uint8 {
    ReapplyBlend,
    StopBlend,
    ContinueBlend,
};

