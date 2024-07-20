#include "SP3_BPUtils.h"
#include "Templates/SubclassOf.h"

class AActor;
class USplineComponent;

float USP3_BPUtils::GetDistanceAlongSplineForWorldLocation(const USplineComponent* SplineComponent, const FVector& Location) {
    return 0.0f;
}

void USP3_BPUtils::BroadcastSignal(AActor* SenderActor, FGameplayTag TargetActorsTag, float BroadcastRadius, FGameplayTagContainer Signals, TSubclassOf<AActor> FilterClass) {
}

USP3_BPUtils::USP3_BPUtils() {
}

