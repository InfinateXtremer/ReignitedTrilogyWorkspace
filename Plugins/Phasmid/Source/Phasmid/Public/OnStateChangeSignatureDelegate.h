#pragma once
#include "CoreMinimal.h"
#include "OnStateChangeSignatureDelegate.generated.h"

class AActor;
class UFalconEnemyStateComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateChangeSignature, AActor*, Actor, UFalconEnemyStateComponent*, StateComponent);

