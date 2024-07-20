#pragma once
#include "CoreMinimal.h"
#include "PhasmidWaveSpawnedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPhasmidWaveSpawned, int32, WaveIndex, TArray<AActor*>, SpawnedActors);

