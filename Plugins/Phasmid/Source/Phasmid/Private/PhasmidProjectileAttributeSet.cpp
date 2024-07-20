#include "PhasmidProjectileAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidProjectileAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidProjectileAttributeSet, ProjectileSpeed);
    DOREPLIFETIME(UPhasmidProjectileAttributeSet, ProjectileGravityMultiplier);
    DOREPLIFETIME(UPhasmidProjectileAttributeSet, ProjectileLifespan);
    DOREPLIFETIME(UPhasmidProjectileAttributeSet, ProjectileBounce);
    DOREPLIFETIME(UPhasmidProjectileAttributeSet, ProjectilePiercing);
    DOREPLIFETIME(UPhasmidProjectileAttributeSet, MediumRangeMultiplier);
    DOREPLIFETIME(UPhasmidProjectileAttributeSet, MediumRangeThreshold);
    DOREPLIFETIME(UPhasmidProjectileAttributeSet, LongRangeMultiplier);
    DOREPLIFETIME(UPhasmidProjectileAttributeSet, LongRangeThreshold);
}

UPhasmidProjectileAttributeSet::UPhasmidProjectileAttributeSet() {
    this->ProjectileSpeed = 3000.00f;
    this->ProjectileGravityMultiplier = 0.00f;
    this->ProjectileLifespan = 10.00f;
    this->ProjectileBounce = 0.00f;
    this->ProjectilePiercing = 0.00f;
    this->MediumRangeMultiplier = 1.00f;
    this->MediumRangeThreshold = 0.00f;
    this->LongRangeMultiplier = 1.00f;
    this->LongRangeThreshold = 0.00f;
}

