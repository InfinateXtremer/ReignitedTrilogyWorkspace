#pragma once
#include "CoreMinimal.h"
#include "SP3CryHdlEvtSigOnProjCountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSP3CryHdlEvtSigOnProjCountChanged, int32, Count);

