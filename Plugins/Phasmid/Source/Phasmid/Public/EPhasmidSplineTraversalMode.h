#pragma once
#include "CoreMinimal.h"
#include "EPhasmidSplineTraversalMode.generated.h"

UENUM(BlueprintType)
enum class EPhasmidSplineTraversalMode : uint8 {
    Flying,
    Walking,
    Slide,
    Jump,
    Swim,
    NavWalking,
};

