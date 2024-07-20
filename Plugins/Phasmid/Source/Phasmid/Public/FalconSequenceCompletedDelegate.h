#pragma once
#include "CoreMinimal.h"
#include "FalconSequenceCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFalconSequenceCompleted, int32, Result);

