#pragma once
#include "CoreMinimal.h"
#include "SP3SparxEvtSigOnCameraPushDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSP3SparxEvtSigOnCameraPush, const AActor*, Camera, float, tBlendIn);

