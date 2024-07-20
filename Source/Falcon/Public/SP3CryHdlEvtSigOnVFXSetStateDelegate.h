#pragma once
#include "CoreMinimal.h"
#include "SP3CryHdlEvtSigOnVFXSetStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSP3CryHdlEvtSigOnVFXSetState, FName, State);

