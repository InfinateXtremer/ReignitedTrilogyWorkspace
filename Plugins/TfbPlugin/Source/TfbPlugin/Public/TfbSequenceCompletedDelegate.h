#pragma once
#include "CoreMinimal.h"
#include "TfbSequenceCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTfbSequenceCompleted, int32, Result);

