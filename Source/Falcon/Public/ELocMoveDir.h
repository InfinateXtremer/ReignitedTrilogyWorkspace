#pragma once
#include "CoreMinimal.h"
#include "ELocMoveDir.generated.h"

UENUM(BlueprintType)
enum class ELocMoveDir : uint8 {
    Forward,
    Right,
    Back,
    Left,
};

