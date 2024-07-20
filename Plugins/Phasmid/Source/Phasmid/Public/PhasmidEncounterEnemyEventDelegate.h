#pragma once
#include "CoreMinimal.h"
#include "PhasmidEncounterEnemyEventDelegate.generated.h"

class AActor;
class AEncounterManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPhasmidEncounterEnemyEvent, AEncounterManager*, Encounter, AActor*, AlertedEnemy, bool, FirstAlert);

