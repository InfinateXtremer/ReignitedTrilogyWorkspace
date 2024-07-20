#include "PhasmidGameState.h"
#include "Net/UnrealNetwork.h"
#include "PhasmidCombatCoordinatorComponent.h"

class AActor;
class APawn;

void APhasmidGameState::PlayerDealtDamage_Implementation(APawn* PlayerPawn, AActor* DamagingActor, AActor* DamagedActor, int32 Damage, bool isCrit, bool IsKill) {
}

void APhasmidGameState::OnRep_PlayerSessionStatsArray() {
}

FPlayerSessionStats APhasmidGameState::GetStatsByPawn(APawn* PlayerPawn) {
    return FPlayerSessionStats{};
}


void APhasmidGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APhasmidGameState, PlayerSessionStatsArray);
}

APhasmidGameState::APhasmidGameState() {
    this->CombatCoordinator = CreateDefaultSubobject<UPhasmidCombatCoordinatorComponent>(TEXT("CombatCoordinator"));
}

