#pragma once
#include "CoreMinimal.h"
#include "EProjectileRotationType.generated.h"

UENUM(BlueprintType)
enum class EProjectileRotationType : uint8 {
    WorldRotation,
    RelativeRotation,
    RelativeToLaunch,
};

