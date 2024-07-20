#include "PhasmidBasicDamageAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidBasicDamageAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidBasicDamageAttributeSet, DamageBase);
    DOREPLIFETIME(UPhasmidBasicDamageAttributeSet, CritMultiplier);
    DOREPLIFETIME(UPhasmidBasicDamageAttributeSet, DamageRepeatInterval);
}

UPhasmidBasicDamageAttributeSet::UPhasmidBasicDamageAttributeSet() {
    this->DamageBase = 0.00f;
    this->CritMultiplier = 1.00f;
    this->DamageRepeatInterval = 0.00f;
}

