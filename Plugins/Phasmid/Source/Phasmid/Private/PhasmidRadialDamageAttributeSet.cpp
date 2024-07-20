#include "PhasmidRadialDamageAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidRadialDamageAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidRadialDamageAttributeSet, Radius);
    DOREPLIFETIME(UPhasmidRadialDamageAttributeSet, InnerDamageMult);
    DOREPLIFETIME(UPhasmidRadialDamageAttributeSet, OuterDamageMult);
}

UPhasmidRadialDamageAttributeSet::UPhasmidRadialDamageAttributeSet() {
    this->Radius = 1.00f;
    this->InnerDamageMult = 1.00f;
    this->OuterDamageMult = 1.00f;
}

