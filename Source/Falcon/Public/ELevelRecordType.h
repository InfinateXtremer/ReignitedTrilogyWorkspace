#pragma once
#include "CoreMinimal.h"
#include "ELevelRecordType.generated.h"

UENUM(BlueprintType)
enum ELevelRecordType {
    ELRT_TRANSPORT,
    ELRT_LEVEL,
    ELRT_LEVEL_SUBSET,
    ELRT_MAX UMETA(Hidden),
};

