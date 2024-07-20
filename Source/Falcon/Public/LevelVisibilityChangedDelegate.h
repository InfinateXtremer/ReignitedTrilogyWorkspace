#pragma once
#include "CoreMinimal.h"
#include "LevelVisibilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLevelVisibilityChanged, FName, LevelName, bool, visible);

