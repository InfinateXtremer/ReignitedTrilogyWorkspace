#pragma once
#include "CoreMinimal.h"
#include "LevelActivationCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelActivationComplete, FName, LevelName);

