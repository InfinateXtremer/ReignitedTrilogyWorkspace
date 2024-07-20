#pragma once
#include "CoreMinimal.h"
#include "EManagerState.generated.h"

UENUM(BlueprintType)
enum EManagerState {
    EMS_IDLE,
    EMS_UNLOADING,
    EMS_LOADING,
    EMS_WAITING,
    EMS_NOTIFY,
    EMS_NOTIFY_DELAY,
    EMS_MAX UMETA(Hidden),
};

