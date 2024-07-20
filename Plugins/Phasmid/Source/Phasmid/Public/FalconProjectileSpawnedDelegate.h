#pragma once
#include "CoreMinimal.h"
#include "FalconProjectileSpawnedDelegate.generated.h"

class APhasmidProjectileActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFalconProjectileSpawned, APhasmidProjectileActor*, Projectile, FName, ProjectileName);

