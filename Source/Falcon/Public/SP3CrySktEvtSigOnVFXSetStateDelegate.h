#pragma once
#include "CoreMinimal.h"
#include "SP3CrySktEvtSigOnVFXSetStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSP3CrySktEvtSigOnVFXSetState, FName, State);
