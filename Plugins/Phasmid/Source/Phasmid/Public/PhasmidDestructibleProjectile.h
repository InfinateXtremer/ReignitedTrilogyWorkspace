#pragma once
#include "CoreMinimal.h"
#include "PhasmidBasicProjectile.h"
#include "PhasmidDestructibleProjectile.generated.h"

UCLASS(Blueprintable)
class APhasmidDestructibleProjectile : public APhasmidBasicProjectile {
    GENERATED_BODY()
public:
    APhasmidDestructibleProjectile();
};

