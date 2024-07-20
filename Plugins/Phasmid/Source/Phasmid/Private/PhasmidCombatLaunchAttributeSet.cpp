#include "PhasmidCombatLaunchAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidCombatLaunchAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidCombatLaunchAttributeSet, LaunchDirection);
    DOREPLIFETIME(UPhasmidCombatLaunchAttributeSet, LaunchArcHeight);
    DOREPLIFETIME(UPhasmidCombatLaunchAttributeSet, LaunchArcLength);
    DOREPLIFETIME(UPhasmidCombatLaunchAttributeSet, LaunchArcDuration);
    DOREPLIFETIME(UPhasmidCombatLaunchAttributeSet, LaunchLandingDuration);
}

UPhasmidCombatLaunchAttributeSet::UPhasmidCombatLaunchAttributeSet() {
    this->LaunchDirection = -1.00f;
    this->LaunchArcHeight = 0.00f;
    this->LaunchArcLength = 0.00f;
    this->LaunchArcDuration = 0.00f;
    this->LaunchLandingDuration = 0.00f;
}

