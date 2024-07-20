#pragma once
#include "CoreMinimal.h"
#include "EFalconPhysMaterialType.generated.h"

UENUM(BlueprintType)
namespace EFalconPhysMaterialType {
    enum Type {
        Unknown,
        Concrete,
        Dirt,
        Water,
        Metal,
        Wood,
        Grass,
        Glass,
        Flesh,
    };
}

