#include "PhasmidNoiseAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidNoiseAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidNoiseAttributeSet, FootstepLoudness);
    DOREPLIFETIME(UPhasmidNoiseAttributeSet, FootstepMaxRange);
}

UPhasmidNoiseAttributeSet::UPhasmidNoiseAttributeSet() {
    this->FootstepLoudness = 0.50f;
    this->FootstepMaxRange = 500.00f;
}

