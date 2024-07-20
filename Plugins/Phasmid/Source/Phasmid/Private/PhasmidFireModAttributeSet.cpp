#include "PhasmidFireModAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidFireModAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidFireModAttributeSet, FireDelayMultiplier);
}

UPhasmidFireModAttributeSet::UPhasmidFireModAttributeSet() {
    this->FireDelayMultiplier = 1.00f;
}

