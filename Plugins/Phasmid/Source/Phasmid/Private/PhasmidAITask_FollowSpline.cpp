#include "PhasmidAITask_FollowSpline.h"

class AAIController;
class AActor;
class UPhasmidAITask_FollowSpline;
class UPhasmidAITask_NavWalkSpline;

void UPhasmidAITask_FollowSpline::OnChildTaskReachedWaypoint(UPhasmidAITask_NavWalkSpline* Task, int32 WaypointIndex) {
}

UPhasmidAITask_FollowSpline* UPhasmidAITask_FollowSpline::FollowSplineToLocation(AAIController* Controller, AActor* SplineActor, const FVector& Destination, bool bStartAtBeginning) {
    return NULL;
}

UPhasmidAITask_FollowSpline* UPhasmidAITask_FollowSpline::FollowSpline(AAIController* Controller, AActor* SplineActor, bool bLooping, bool bReverse, bool bStartAtBeginning) {
    return NULL;
}

UPhasmidAITask_FollowSpline* UPhasmidAITask_FollowSpline::FollowActorOnSpline(AAIController* Controller, AActor* SplineActor, AActor* ActorToFollow) {
    return NULL;
}

UPhasmidAITask_FollowSpline* UPhasmidAITask_FollowSpline::AvoidActorOnSpline(AAIController* Controller, AActor* SplineActor, AActor* ActorToAvoid) {
    return NULL;
}
