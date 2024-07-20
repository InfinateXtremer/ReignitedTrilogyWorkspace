#include "PhasmidResourceAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidResourceAttributeSet::OnRep_ResourceMax() {
}

void UPhasmidResourceAttributeSet::OnRep_ResourceCurrent() {
}

void UPhasmidResourceAttributeSet::OnRep_ReloadPoolMax() {
}

void UPhasmidResourceAttributeSet::OnRep_ReloadPoolCurrent() {
}

void UPhasmidResourceAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidResourceAttributeSet, ResourceCurrent);
    DOREPLIFETIME(UPhasmidResourceAttributeSet, ResourceMax);
    DOREPLIFETIME(UPhasmidResourceAttributeSet, ReloadPoolCurrent);
    DOREPLIFETIME(UPhasmidResourceAttributeSet, ReloadPoolMax);
    DOREPLIFETIME(UPhasmidResourceAttributeSet, ReloadSpeedMultiplier);
    DOREPLIFETIME(UPhasmidResourceAttributeSet, ResourceRegenDelay);
    DOREPLIFETIME(UPhasmidResourceAttributeSet, ResourceRegenInterval);
    DOREPLIFETIME(UPhasmidResourceAttributeSet, ResourceConsumedPerUse);
    DOREPLIFETIME(UPhasmidResourceAttributeSet, ResourceConsumeInterval);
    DOREPLIFETIME(UPhasmidResourceAttributeSet, ResourceGainedPerRegen);
}

UPhasmidResourceAttributeSet::UPhasmidResourceAttributeSet() {
    this->ResourceCurrent = 0.00f;
    this->ResourceMax = 0.00f;
    this->ReloadPoolCurrent = -1.00f;
    this->ReloadPoolMax = -1.00f;
    this->ReloadSpeedMultiplier = 1.00f;
    this->ResourceRegenDelay = 0.00f;
    this->ResourceRegenInterval = 0.00f;
    this->ResourceConsumedPerUse = 1.00f;
    this->ResourceConsumeInterval = 1.00f;
    this->ResourceGainedPerRegen = 1.00f;
}

