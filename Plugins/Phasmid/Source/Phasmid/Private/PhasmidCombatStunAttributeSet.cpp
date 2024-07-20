#include "PhasmidCombatStunAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidCombatStunAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidCombatStunAttributeSet, CombatStunDuration);
    DOREPLIFETIME(UPhasmidCombatStunAttributeSet, CombatStunCooldownDuration);
}

UPhasmidCombatStunAttributeSet::UPhasmidCombatStunAttributeSet() {
    this->CombatStunDuration = 1.00f;
    this->CombatStunCooldownDuration = 0.00f;
}

