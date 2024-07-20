#pragma once
#include "CoreMinimal.h"
#include "EPCMSkateEventType.h"
#include "PCMEvtSigOnSkateEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPCMEvtSigOnSkateEvent, EPCMSkateEventType, evtType, FName, Name);

