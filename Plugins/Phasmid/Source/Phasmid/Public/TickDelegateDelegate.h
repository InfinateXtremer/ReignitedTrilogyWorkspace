#pragma once
#include "CoreMinimal.h"
#include "TickDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTickDelegate, float, DeltaTime);

