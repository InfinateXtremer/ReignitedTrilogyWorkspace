#pragma once
#include "CoreMinimal.h"
#include "OnGetPlayerImageCompleteDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetPlayerImageComplete, const UTexture2D*, Image, bool, Success);

