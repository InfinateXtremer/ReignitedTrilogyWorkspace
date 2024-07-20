#pragma once
#include "CoreMinimal.h"
#include "EPersistence.generated.h"

UENUM(BlueprintType)
enum class EPersistence : uint8 {
    DefaultPersist,
    NoPersist,
    SemiPersist,
    FullyPersist,
};

