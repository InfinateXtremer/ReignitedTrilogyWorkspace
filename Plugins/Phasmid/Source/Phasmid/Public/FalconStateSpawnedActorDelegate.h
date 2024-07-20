#pragma once
#include "CoreMinimal.h"
#include "FalconStateSpawnedActorDelegate.generated.h"

class AActor;
class UFalconEnemyStateComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFalconStateSpawnedActor, UFalconEnemyStateComponent*, State, AActor*, SpawnedActor);

