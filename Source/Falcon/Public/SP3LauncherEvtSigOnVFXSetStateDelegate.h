#pragma once
#include "CoreMinimal.h"
#include "SP3LauncherEvtSigOnVFXSetStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSP3LauncherEvtSigOnVFXSetState, FName, State);

