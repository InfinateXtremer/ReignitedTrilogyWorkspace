#pragma once
#include "CoreMinimal.h"
#include "ELevelTransportType.generated.h"

UENUM(BlueprintType)
enum ELevelTransportType {
    ELTT_LOAD_ONLY,
    ELTT_UNLOAD_CURRENT_LOAD_NEW,
    ELTT_UNLOAD_ONLY,
    ELTT_DELAYED_START,
    ELTT_MAX UMETA(Hidden),
};

