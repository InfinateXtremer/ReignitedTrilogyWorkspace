#include "PhasmidCharacterDamageAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidCharacterDamageAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidCharacterDamageAttributeSet, DealDamageMultiplier);
}

UPhasmidCharacterDamageAttributeSet::UPhasmidCharacterDamageAttributeSet() {
    this->DealDamageMultiplier = 1.00f;
}

