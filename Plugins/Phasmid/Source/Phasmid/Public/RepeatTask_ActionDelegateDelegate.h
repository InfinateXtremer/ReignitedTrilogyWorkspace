#pragma once
#include "CoreMinimal.h"
#include "RepeatTask_ActionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRepeatTask_ActionDelegate, int32, ActionCount);

