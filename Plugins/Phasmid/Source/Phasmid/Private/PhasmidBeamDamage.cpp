#include "PhasmidBeamDamage.h"
#include "PhasmidAbilitySystemComponent.h"

bool APhasmidBeamDamage::IsDelayOver() const {
    return false;
}

float APhasmidBeamDamage::GetTimeAliveRatio() const {
    return 0.0f;
}

APhasmidBeamDamage::APhasmidBeamDamage() {
    this->TraceRadius = 0.00f;
    this->bDoAllTracesEveryFrame = false;
    this->StartDamagingDelay = 0.00f;
    this->TraceChannel = TraceTypeQuery1;
    this->bDebugDraw = false;
    this->AbilitySystemComponent = CreateDefaultSubobject<UPhasmidAbilitySystemComponent>(TEXT("AbilitySystem"));
}

