#pragma once
#include "CoreMinimal.h"
#include "PhasmidSpawnActorDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhasmidSpawnActorDelegate, AActor*, SpawnedActor);

