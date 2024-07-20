#pragma once
#include "CoreMinimal.h"
#include "EProjectileOrientation.generated.h"

UENUM(BlueprintType)
enum class EProjectileOrientation : uint8 {
    Manual,
    OrientToPlayer,
    OrientToTarget,
};

