#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "UObject/NoExportTypes.h"
#include "PhasmidAITask_FollowSpline.generated.h"

class AAIController;
class AActor;
class UPhasmidAITask_FollowSpline;
class UPhasmidAITask_NavWalkSpline;

UCLASS(Blueprintable)
class PHASMID_API UPhasmidAITask_FollowSpline : public UAITask {
    GENERATED_BODY()

private:
    UFUNCTION(BlueprintCallable)
    void OnChildTaskReachedWaypoint(UPhasmidAITask_NavWalkSpline* Task, int32 WaypointIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    static UPhasmidAITask_FollowSpline* FollowSplineToLocation(AAIController* Controller, AActor* SplineActor, const FVector& Destination, bool bStartAtBeginning);
    
    UFUNCTION(BlueprintCallable)
    static UPhasmidAITask_FollowSpline* FollowSpline(AAIController* Controller, AActor* SplineActor, bool bLooping, bool bReverse, bool bStartAtBeginning);
    
    UFUNCTION(BlueprintCallable)
    static UPhasmidAITask_FollowSpline* FollowActorOnSpline(AAIController* Controller, AActor* SplineActor, AActor* ActorToFollow);
    
    UFUNCTION(BlueprintCallable)
    static UPhasmidAITask_FollowSpline* AvoidActorOnSpline(AAIController* Controller, AActor* SplineActor, AActor* ActorToAvoid);
    
};

