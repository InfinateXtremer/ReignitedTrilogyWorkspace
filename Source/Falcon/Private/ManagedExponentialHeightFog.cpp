#include "ManagedExponentialHeightFog.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Net/UnrealNetwork.h"

void AManagedExponentialHeightFog::OnRep_bEnabled() {
}

void AManagedExponentialHeightFog::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AManagedExponentialHeightFog, bEnabled);
}

AManagedExponentialHeightFog::AManagedExponentialHeightFog() {
    this->Component = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFogComponent0"));
    this->ExponentialHeightFogScaleIntensityComponent = NULL;
    this->bEnabled = false;
}

