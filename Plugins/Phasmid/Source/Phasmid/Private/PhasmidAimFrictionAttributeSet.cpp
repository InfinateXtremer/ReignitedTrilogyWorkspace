#include "PhasmidAimFrictionAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidAimFrictionAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidAimFrictionAttributeSet, FrictionInnerMult);
    DOREPLIFETIME(UPhasmidAimFrictionAttributeSet, FrictionOuterMult);
}

UPhasmidAimFrictionAttributeSet::UPhasmidAimFrictionAttributeSet() {
    this->FrictionInnerMult = 1.00f;
    this->FrictionOuterMult = 1.00f;
}

