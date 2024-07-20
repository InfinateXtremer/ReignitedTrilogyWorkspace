#include "PhasmidCombatPushAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidCombatPushAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidCombatPushAttributeSet, PushDirection);
    DOREPLIFETIME(UPhasmidCombatPushAttributeSet, PushDistance);
    DOREPLIFETIME(UPhasmidCombatPushAttributeSet, PushDuration);
    DOREPLIFETIME(UPhasmidCombatPushAttributeSet, PushStunDuration);
}

UPhasmidCombatPushAttributeSet::UPhasmidCombatPushAttributeSet() {
    this->PushDirection = -1.00f;
    this->PushDistance = 1.00f;
    this->PushDuration = 1.00f;
    this->PushStunDuration = 0.50f;
}

