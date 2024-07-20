#include "PhasmidAITask_FollowPath.h"

class AAIController;
class ACharacter;
class APhasmidPatrolPath;
class UPhasmidAITask_FollowPath;

void UPhasmidAITask_FollowPath::OnCharacterMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PrevCustomMode) {
}

UPhasmidAITask_FollowPath* UPhasmidAITask_FollowPath::FollowPathToSplineKey(AAIController* Controller, APhasmidPatrolPath* Path, FPhasmidPathFlags Flags, float Key) {
    return NULL;
}

UPhasmidAITask_FollowPath* UPhasmidAITask_FollowPath::FollowPath(AAIController* Controller, APhasmidPatrolPath* Path, FPhasmidPathFlags Flags) {
    return NULL;
}
