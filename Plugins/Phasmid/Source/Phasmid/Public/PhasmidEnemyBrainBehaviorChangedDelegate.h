#pragma once
#include "CoreMinimal.h"
#include "PhasmidEnemyBrainBehaviorChangedDelegate.generated.h"

class UBehaviorTree;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPhasmidEnemyBrainBehaviorChanged, UBehaviorTree*, PreviousBehavior, UBehaviorTree*, NextBehavior);

