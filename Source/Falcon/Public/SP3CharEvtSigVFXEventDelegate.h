#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SP3CharEvtSigVFXEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSP3CharEvtSigVFXEvent, FName, evtName, const FTransform&, xfm, FName, param0, float, param1);

