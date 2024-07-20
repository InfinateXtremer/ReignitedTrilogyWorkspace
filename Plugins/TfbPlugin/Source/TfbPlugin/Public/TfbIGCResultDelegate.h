#pragma once
#include "CoreMinimal.h"
#include "TfbIGCResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FTfbIGCResult, int32, Result);

