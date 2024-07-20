#pragma once
#include "CoreMinimal.h"
#include "NavWalkTask_WaypointReachedDelegate.generated.h"

class UPhasmidAITask_NavWalkSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNavWalkTask_WaypointReached, UPhasmidAITask_NavWalkSpline*, Task, int32, WaypointIndex);

