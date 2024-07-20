#pragma once
#include "CoreMinimal.h"
#include "StateExitSignatureDelegate.generated.h"

class UFalconEnemyStateComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateExitSignature, UFalconEnemyStateComponent*, StateComponent, UFalconEnemyStateComponent*, NextStateComponent);

