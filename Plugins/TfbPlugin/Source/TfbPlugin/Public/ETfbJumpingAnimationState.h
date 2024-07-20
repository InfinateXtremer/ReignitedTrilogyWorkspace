#pragma once
#include "CoreMinimal.h"
#include "ETfbJumpingAnimationState.generated.h"

UENUM(BlueprintType)
enum class ETfbJumpingAnimationState : uint8 {
    None,
    Jumping,
    Falling,
    Landing,
};

