#include "PhasmidCombatKnockDownAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidCombatKnockDownAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidCombatKnockDownAttributeSet, KnockDownSpeed);
    DOREPLIFETIME(UPhasmidCombatKnockDownAttributeSet, KnockDownDuration);
}

UPhasmidCombatKnockDownAttributeSet::UPhasmidCombatKnockDownAttributeSet() {
    this->KnockDownSpeed = 0.00f;
    this->KnockDownDuration = 0.00f;
}

