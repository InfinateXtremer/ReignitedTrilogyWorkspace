#pragma once
#include "CoreMinimal.h"
#include "PhasmidEncounterEventDelegate.generated.h"

class AEncounterManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhasmidEncounterEvent, AEncounterManager*, Encounter);

