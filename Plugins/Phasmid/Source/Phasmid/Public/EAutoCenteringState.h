#pragma once
#include "CoreMinimal.h"
#include "EAutoCenteringState.generated.h"

UENUM(BlueprintType)
enum class EAutoCenteringState : uint8 {
    None,
    NoCamInput,
    CamInput,
};

