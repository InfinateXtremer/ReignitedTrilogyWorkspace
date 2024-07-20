#include "PhasmidCombatVortexAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidCombatVortexAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidCombatVortexAttributeSet, VortexOuterRadius);
    DOREPLIFETIME(UPhasmidCombatVortexAttributeSet, VortexInnerRadius);
    DOREPLIFETIME(UPhasmidCombatVortexAttributeSet, VortexDuration);
    DOREPLIFETIME(UPhasmidCombatVortexAttributeSet, VortexStunDuration);
}

UPhasmidCombatVortexAttributeSet::UPhasmidCombatVortexAttributeSet() {
    this->VortexOuterRadius = 1000.00f;
    this->VortexInnerRadius = 0.00f;
    this->VortexDuration = 0.25f;
    this->VortexStunDuration = 0.00f;
}

