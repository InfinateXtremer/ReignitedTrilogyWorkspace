#include "SP3_HomingTargetComponent.h"

class AActor;
class USP3_HomingTargetComponent;

int32 USP3_HomingTargetComponent::FindTargets(const AActor* sender, const FTransform& xfmWS, float distMax, float angMax, float angWeight, int32 nMax, TArray<USP3_HomingTargetComponent*>& Targets, bool checkLOS, bool dbgDraw) {
    return 0;
}

USP3_HomingTargetComponent* USP3_HomingTargetComponent::FindTarget(const AActor* sender, const FTransform& xfmWS, float distMax, float angMax, float angWeight, bool checkLOS, bool dbgDraw) {
    return NULL;
}

USP3_HomingTargetComponent::USP3_HomingTargetComponent() {
    this->Priority = 1.00f;
}

