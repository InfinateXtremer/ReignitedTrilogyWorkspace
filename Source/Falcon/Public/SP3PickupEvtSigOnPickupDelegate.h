#pragma once
#include "CoreMinimal.h"
#include "SP3PickupEvtSigOnPickupDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSP3PickupEvtSigOnPickup, AActor*, Pickup, AActor*, receiver, FName, Type);

