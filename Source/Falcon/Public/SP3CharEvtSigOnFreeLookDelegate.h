#pragma once
#include "CoreMinimal.h"
#include "SP3CharEvtSigOnFreeLookDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSP3CharEvtSigOnFreeLook, bool, Active);

