#include "PhasmidAimDownSightsAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidAimDownSightsAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidAimDownSightsAttributeSet, AimAccuracyMult_X);
    DOREPLIFETIME(UPhasmidAimDownSightsAttributeSet, AimAccuracyMult_Y);
    DOREPLIFETIME(UPhasmidAimDownSightsAttributeSet, AimTransitionInDuration);
    DOREPLIFETIME(UPhasmidAimDownSightsAttributeSet, AimTransitionOutDuration);
    DOREPLIFETIME(UPhasmidAimDownSightsAttributeSet, AimFOVMult);
    DOREPLIFETIME(UPhasmidAimDownSightsAttributeSet, AimTurnRateMult);
    DOREPLIFETIME(UPhasmidAimDownSightsAttributeSet, AimLookupRateMult);
    DOREPLIFETIME(UPhasmidAimDownSightsAttributeSet, AimMoveSpeedMult);
}

UPhasmidAimDownSightsAttributeSet::UPhasmidAimDownSightsAttributeSet() {
    this->AimAccuracyMult_X = 1.00f;
    this->AimAccuracyMult_Y = 1.00f;
    this->AimTransitionInDuration = 0.10f;
    this->AimTransitionOutDuration = 0.10f;
    this->AimFOVMult = 1.00f;
    this->AimTurnRateMult = 1.00f;
    this->AimLookupRateMult = 1.00f;
    this->AimMoveSpeedMult = 1.00f;
}

