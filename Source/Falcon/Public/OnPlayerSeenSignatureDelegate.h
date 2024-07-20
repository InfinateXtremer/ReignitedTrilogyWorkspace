#pragma once
#include "CoreMinimal.h"
#include "OnPlayerSeenSignatureDelegate.generated.h"

class UWatchPlayerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerSeenSignature, UWatchPlayerComponent*, Watcher, bool, CanSeePlayer);

