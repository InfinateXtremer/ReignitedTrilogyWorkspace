#pragma once
#include "CoreMinimal.h"
#include "EPhasmidSaveType.generated.h"

UENUM(BlueprintType)
enum class EPhasmidSaveType : uint8 {
    EPST_LevelEnd,
    EPST_Checkpoint,
    EPST_Respawn,
    EPST_Ignore,
    EPST_Delete,
    EPST_MAX UMETA(Hidden),
};

