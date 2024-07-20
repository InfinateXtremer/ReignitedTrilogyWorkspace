#pragma once
#include "CoreMinimal.h"
#include "OnLoginUICompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginUIComplete, bool, Shown);

