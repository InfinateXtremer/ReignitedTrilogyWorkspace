#pragma once
#include "CoreMinimal.h"
#include "EFalconAreaExitTitle.generated.h"

UENUM(BlueprintType)
enum class EFalconAreaExitTitle : uint8 {
    None,
    ExitArea,
    GiveUp,
    QuitRace,
    QuitToLevel,
    Unknown = 0xFF,
};

