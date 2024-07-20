#include "PhasmidAbilityBaseActor.h"
#include "Net/UnrealNetwork.h"

void APhasmidAbilityBaseActor::SetTeamId(EPhasmidTeamId newTeamId) {
}

void APhasmidAbilityBaseActor::OnRep_TeamId_Implementation(EPhasmidTeamId oldTeamId) {
}

void APhasmidAbilityBaseActor::InitializeGameplayTagsFromInstigator(const FGameplayTagContainer& TagContainer, TArray<FString> Suffixes) {
}


void APhasmidAbilityBaseActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APhasmidAbilityBaseActor, TeamId);
}

APhasmidAbilityBaseActor::APhasmidAbilityBaseActor() {
    this->AbilitySet = NULL;
    this->TeamId = EPhasmidTeamId::Neutral;
}

