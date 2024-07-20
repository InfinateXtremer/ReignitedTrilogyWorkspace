#pragma once
#include "CoreMinimal.h"
#include "EFalconFacingMode.generated.h"

UENUM(BlueprintType)
enum class EFalconFacingMode : uint8 {
    None,
    FaceTarget,
    FaceMovement,
};

