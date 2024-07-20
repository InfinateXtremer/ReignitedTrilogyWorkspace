#include "PhasmidAIController.h"
#include "PhasmidEnemyBrainComponent.h"

class UPhasmidAIConfiguratorComponent;

void APhasmidAIController::SetTeamId(EPhasmidTeamId newTeamId) {
}

bool APhasmidAIController::IssueInitialOrders(UPhasmidAIConfiguratorComponent* AIConfig) {
    return false;
}

EPhasmidTeamId APhasmidAIController::GetTeamId() const {
    return EPhasmidTeamId::TeamOne;
}

FGameplayTag APhasmidAIController::CreateGameplayTagFromString(const FString& InputString) {
    return FGameplayTag{};
}

APhasmidAIController::APhasmidAIController() {
    this->EnemyBrainComponent = CreateDefaultSubobject<UPhasmidEnemyBrainComponent>(TEXT("PhasmidEnemyBrainComponent"));
}

