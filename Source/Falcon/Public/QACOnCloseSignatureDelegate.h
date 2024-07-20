#pragma once
#include "CoreMinimal.h"
#include "QACOnCloseSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQACOnCloseSignature, FName, State);

