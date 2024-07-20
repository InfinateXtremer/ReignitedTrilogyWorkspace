#include "PhasmidBurstFireAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidBurstFireAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidBurstFireAttributeSet, BurstFireAmount);
    DOREPLIFETIME(UPhasmidBurstFireAttributeSet, BurstFireDelay);
}

UPhasmidBurstFireAttributeSet::UPhasmidBurstFireAttributeSet() {
    this->BurstFireAmount = 1.00f;
    this->BurstFireDelay = 0.10f;
}

