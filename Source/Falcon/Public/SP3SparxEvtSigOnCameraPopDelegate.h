#pragma once
#include "CoreMinimal.h"
#include "SP3SparxEvtSigOnCameraPopDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSP3SparxEvtSigOnCameraPop, const AActor*, Camera, float, tBlendOut);

