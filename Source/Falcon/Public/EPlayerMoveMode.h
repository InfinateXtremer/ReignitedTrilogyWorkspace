#pragma once
#include "CoreMinimal.h"
#include "EPlayerMoveMode.generated.h"

UENUM(BlueprintType)
enum class EPlayerMoveMode : uint8 {
    None,
    Falling,
    Gliding,
    SuperFly,
    Jumping,
    Skateboarding,
    Swimming,
    Walking,
    Unknown = 0xFF,
};

