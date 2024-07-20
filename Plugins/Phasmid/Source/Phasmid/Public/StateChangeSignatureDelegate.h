#pragma once
#include "CoreMinimal.h"
#include "StateChangeSignatureDelegate.generated.h"

class UFalconEnemyStateComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateChangeSignature, UFalconEnemyStateComponent*, StateComponent);

