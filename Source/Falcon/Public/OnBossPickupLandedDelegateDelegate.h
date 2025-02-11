#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnBossPickupLandedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBossPickupLandedDelegate, const FHitResult&, Hit);

