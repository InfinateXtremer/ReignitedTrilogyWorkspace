#include "PhasmidPlayerState.h"
#include "Net/UnrealNetwork.h"


void APhasmidPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APhasmidPlayerState, AmmoDropCount_Energy);
    DOREPLIFETIME(APhasmidPlayerState, AmmoDropRange_Energy);
    DOREPLIFETIME(APhasmidPlayerState, AmmoDropCount_Ballistic);
    DOREPLIFETIME(APhasmidPlayerState, AmmoDropRange_Ballistic);
}

APhasmidPlayerState::APhasmidPlayerState() {
    this->AmmoDropCount_Energy = 0;
    this->AmmoDropCount_Ballistic = 0;
}

