#pragma once
#include "CoreMinimal.h"
#include "FalconLoadingScreenStateUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFalconLoadingScreenStateUpdate, float, DeltaTime);

