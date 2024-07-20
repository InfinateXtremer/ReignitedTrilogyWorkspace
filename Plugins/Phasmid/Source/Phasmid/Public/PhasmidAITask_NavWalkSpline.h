#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask_MoveTo.h"
#include "NavWalkTask_WaypointReachedDelegate.h"
#include "PhasmidAITask_NavWalkSpline.generated.h"

UCLASS(Blueprintable)
class UPhasmidAITask_NavWalkSpline : public UAITask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavWalkTask_WaypointReached OnWaypointReached;

};

