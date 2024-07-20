#pragma once
#include "CoreMinimal.h"
#include "EProjectileImpactType.generated.h"

UENUM(BlueprintType)
enum class EProjectileImpactType : uint8 {
    OnImpactEffect,
    OnExpireEffect,
};

