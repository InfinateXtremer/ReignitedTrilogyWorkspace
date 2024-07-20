#pragma once
#include "CoreMinimal.h"
#include "SP3DmgEvtSigDeathEndDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSP3DmgEvtSigDeathEnd, AActor*, Actor);

