#pragma once
#include "CoreMinimal.h"
#include "ECollisionRegionShape.generated.h"

UENUM(BlueprintType)
enum class ECollisionRegionShape : uint8 {
    Sphere,
    Box,
    Capsule,
    Custom,
};

