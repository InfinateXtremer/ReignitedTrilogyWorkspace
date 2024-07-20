#pragma once
#include "CoreMinimal.h"
#include "PhasmidStateChangeSignatureDelegate.generated.h"

class UPhasmidStateComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhasmidStateChangeSignature, UPhasmidStateComponent*, StateComponent);

