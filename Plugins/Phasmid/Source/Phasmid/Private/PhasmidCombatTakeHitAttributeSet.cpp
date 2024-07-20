#include "PhasmidCombatTakeHitAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidCombatTakeHitAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidCombatTakeHitAttributeSet, FlinchDuration);
    DOREPLIFETIME(UPhasmidCombatTakeHitAttributeSet, FlinchIntensity);
}

UPhasmidCombatTakeHitAttributeSet::UPhasmidCombatTakeHitAttributeSet() {
    this->FlinchDuration = 0.30f;
    this->FlinchIntensity = 100.00f;
}

