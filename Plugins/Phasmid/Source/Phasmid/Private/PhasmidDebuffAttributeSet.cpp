#include "PhasmidDebuffAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidDebuffAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidDebuffAttributeSet, TakeDamageMod);
    DOREPLIFETIME(UPhasmidDebuffAttributeSet, DealDamageMod);
    DOREPLIFETIME(UPhasmidDebuffAttributeSet, MoveSpeedMod);
    DOREPLIFETIME(UPhasmidDebuffAttributeSet, DebuffDuration);
}

UPhasmidDebuffAttributeSet::UPhasmidDebuffAttributeSet() {
    this->TakeDamageMod = 0.00f;
    this->DealDamageMod = 0.00f;
    this->MoveSpeedMod = 0.00f;
    this->DebuffDuration = 0.00f;
}

