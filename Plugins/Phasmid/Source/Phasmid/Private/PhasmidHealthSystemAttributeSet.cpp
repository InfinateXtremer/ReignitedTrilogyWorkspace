#include "PhasmidHealthSystemAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidHealthSystemAttributeSet::OnRep_TakeDamageMult() {
}

void UPhasmidHealthSystemAttributeSet::OnRep_ShieldRegenRate() {
}

void UPhasmidHealthSystemAttributeSet::OnRep_ShieldRegenDelay() {
}

void UPhasmidHealthSystemAttributeSet::OnRep_ShieldMax() {
}

void UPhasmidHealthSystemAttributeSet::OnRep_ShieldCurrent() {
}

void UPhasmidHealthSystemAttributeSet::OnRep_MaxDamagePerHit() {
}

void UPhasmidHealthSystemAttributeSet::OnRep_LowHealthThreshold() {
}

void UPhasmidHealthSystemAttributeSet::OnRep_HealthMax() {
}

void UPhasmidHealthSystemAttributeSet::OnRep_HealthCurrent() {
}

void UPhasmidHealthSystemAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidHealthSystemAttributeSet, HealthMax);
    DOREPLIFETIME(UPhasmidHealthSystemAttributeSet, HealthCurrent);
    DOREPLIFETIME(UPhasmidHealthSystemAttributeSet, ShieldMax);
    DOREPLIFETIME(UPhasmidHealthSystemAttributeSet, ShieldRegenRate);
    DOREPLIFETIME(UPhasmidHealthSystemAttributeSet, ShieldRegenDelay);
    DOREPLIFETIME(UPhasmidHealthSystemAttributeSet, ShieldCurrent);
    DOREPLIFETIME(UPhasmidHealthSystemAttributeSet, TakeDamageMultiplier);
    DOREPLIFETIME(UPhasmidHealthSystemAttributeSet, LowHealthThreshold);
    DOREPLIFETIME(UPhasmidHealthSystemAttributeSet, MaxDamagePerHit);
}

UPhasmidHealthSystemAttributeSet::UPhasmidHealthSystemAttributeSet() {
    this->HealthMax = 0.00f;
    this->HealthCurrent = 0.00f;
    this->ShieldMax = 0.00f;
    this->ShieldRegenRate = 0.00f;
    this->ShieldRegenDelay = 0.00f;
    this->ShieldCurrent = 0.00f;
    this->TakeDamageMultiplier = 1.00f;
    this->LowHealthThreshold = 0.00f;
    this->MaxDamagePerHit = 0.00f;
}

