#include "PhasmidGunFireAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidGunFireAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, FireDelay);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, FireNoiseLevel);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, BaseAccuracy_X);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, BaseAccuracy_Y);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, Recoil_X);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, Recoil_Y);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, RecoilRecoverTime);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, RecoilFirstShotMultiplier);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, MaxAccuracy_X);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, MaxAccuracy_Y);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, AccuracyChangePerShot);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, AccuracyShotThreshold);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, AccuracyRecoverTime);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, AccuracyRecoverDelay);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, FireModeAutomatic);
    DOREPLIFETIME(UPhasmidGunFireAttributeSet, PelletAmount);
}

UPhasmidGunFireAttributeSet::UPhasmidGunFireAttributeSet() {
    this->FireDelay = 0.10f;
    this->FireNoiseLevel = 0.10f;
    this->BaseAccuracy_X = 0.00f;
    this->BaseAccuracy_Y = 0.00f;
    this->Recoil_X = 0.00f;
    this->Recoil_Y = 0.00f;
    this->RecoilRecoverTime = 0.00f;
    this->RecoilFirstShotMultiplier = 0.00f;
    this->MaxAccuracy_X = 0.00f;
    this->MaxAccuracy_Y = 0.00f;
    this->AccuracyChangePerShot = 0.00f;
    this->AccuracyShotThreshold = 0.00f;
    this->AccuracyRecoverTime = 0.00f;
    this->AccuracyRecoverDelay = 0.00f;
    this->FireModeAutomatic = 0.00f;
    this->PelletAmount = 1.00f;
}

