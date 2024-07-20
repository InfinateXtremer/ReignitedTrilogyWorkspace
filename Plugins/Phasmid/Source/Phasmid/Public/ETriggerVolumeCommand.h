#pragma once
#include "CoreMinimal.h"
#include "ETriggerVolumeCommand.generated.h"

UENUM(BlueprintType)
enum class ETriggerVolumeCommand : uint8 {
    TVC_None,
    TVC_NextWave,
    TVC_FocusFire,
    TVC_AlertAll,
    TVC_MAX UMETA(Hidden),
};

