#pragma once
#include "CoreMinimal.h"
#include "OnBossPickupActivatedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBossPickupActivatedDelegate, AActor*, Actor);

