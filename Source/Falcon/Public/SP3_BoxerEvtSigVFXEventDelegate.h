#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SP3_BoxerEvtSigVFXEventDelegate.generated.h"

class USP3_BoxerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSP3_BoxerEvtSigVFXEvent, USP3_BoxerComponent*, boxer, FName, evtName, const FTransform&, xfm, FName, param0, float, param1);

