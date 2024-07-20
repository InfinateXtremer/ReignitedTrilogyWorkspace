#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PhasmidProjectileActor.h"
#include "PhasmidBasicProjectile.generated.h"

UCLASS(Blueprintable)
class APhasmidBasicProjectile : public APhasmidProjectileActor {
    GENERATED_BODY()
public:
    APhasmidBasicProjectile();
    UFUNCTION(BlueprintCallable)
    void OnProjectileStop(const FHitResult& ImpactResult);
    
};

