#include "PhasmidCharacterAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidCharacterAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidCharacterAttributeSet, JumpMaxHoldTime);
}

UPhasmidCharacterAttributeSet::UPhasmidCharacterAttributeSet() {
    this->JumpMaxHoldTime = 0.00f;
}

