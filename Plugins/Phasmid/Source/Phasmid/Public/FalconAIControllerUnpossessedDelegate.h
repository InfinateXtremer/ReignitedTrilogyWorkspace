#pragma once
#include "CoreMinimal.h"
#include "FalconAIControllerUnpossessedDelegate.generated.h"

class AFalconAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFalconAIControllerUnpossessed, AFalconAIController*, Controller);

