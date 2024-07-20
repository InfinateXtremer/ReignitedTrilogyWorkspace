#pragma once
#include "CoreMinimal.h"
#include "SP3DmgEvtSigDeathStartDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSP3DmgEvtSigDeathStart, AActor*, Actor);

