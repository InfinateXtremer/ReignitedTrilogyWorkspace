#pragma once
#include "CoreMinimal.h"
#include "PhasmidReinforcementsSpawnedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhasmidReinforcementsSpawned, AActor*, SpawnedActor);

