#include "PhasmidHealAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidHealAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidHealAttributeSet, HealHealth);
    DOREPLIFETIME(UPhasmidHealAttributeSet, HealShield);
    DOREPLIFETIME(UPhasmidHealAttributeSet, HealRepeatInterval);
    DOREPLIFETIME(UPhasmidHealAttributeSet, HealRepeatDuration);
}

UPhasmidHealAttributeSet::UPhasmidHealAttributeSet() {
    this->HealHealth = 0.00f;
    this->HealShield = 0.00f;
    this->HealRepeatInterval = 0.00f;
    this->HealRepeatDuration = 0.00f;
}

