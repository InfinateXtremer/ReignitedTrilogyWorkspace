#include "PhasmidSecondaryDamageAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidSecondaryDamageAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidSecondaryDamageAttributeSet, DamageSecondary);
    DOREPLIFETIME(UPhasmidSecondaryDamageAttributeSet, CritMultiplierSecondary);
    DOREPLIFETIME(UPhasmidSecondaryDamageAttributeSet, DamageRepeatIntervalSecondary);
}

UPhasmidSecondaryDamageAttributeSet::UPhasmidSecondaryDamageAttributeSet() {
    this->DamageSecondary = 0.00f;
    this->CritMultiplierSecondary = 1.00f;
    this->DamageRepeatIntervalSecondary = 0.00f;
}

