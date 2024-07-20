#pragma once
#include "CoreMinimal.h"
#include "EPhasmidActorFilterMatchType.generated.h"

UENUM(BlueprintType)
enum class EPhasmidActorFilterMatchType : uint8 {
    Skip,
    MustPass,
    MustFail,
};

