#pragma once
#include "CoreMinimal.h"
#include "ELevelTransportState.generated.h"

UENUM(BlueprintType)
enum ELevelTransportState {
    ELTS_QUEUED,
    ELTS_IN_PROGRESS_UNLOADING,
    ELTS_IN_PROGRESS_LOADING,
    ELTS_WAITING,
    ELTS_COMPLETE,
    ELTS_MAX UMETA(Hidden),
};

