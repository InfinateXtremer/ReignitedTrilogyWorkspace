#pragma once
#include "CoreMinimal.h"
#include "SP3CharEvtSigOnGemFindDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSP3CharEvtSigOnGemFind, bool, Active);

