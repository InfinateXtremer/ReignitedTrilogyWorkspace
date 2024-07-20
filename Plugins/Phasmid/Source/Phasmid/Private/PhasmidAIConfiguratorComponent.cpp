#include "PhasmidAIConfiguratorComponent.h"

class UBehaviorTree;

bool UPhasmidAIConfiguratorComponent::IssueOrder_Custom(FPhasmidAIOrdersHandle& OrderHandle) {
    return false;
}

void UPhasmidAIConfiguratorComponent::IssueInitialOrders() {
}

UBehaviorTree* UPhasmidAIConfiguratorComponent::GetBehaviorByName(FName behaviorName) {
    return NULL;
}

bool UPhasmidAIConfiguratorComponent::CompleteOrder(const FPhasmidAIOrdersHandle& OrderHandle) {
    return false;
}

EPhasmidAIOrdersStatus UPhasmidAIConfiguratorComponent::CheckOrderStatus(const FPhasmidAIOrdersHandle& OrderHandle) const {
    return EPhasmidAIOrdersStatus::InProgress;
}

UPhasmidAIConfiguratorComponent::UPhasmidAIConfiguratorComponent() {
    this->Blackboard = NULL;
    this->DefaultBehavior = NULL;
    this->DefaultBehaviorsTable = NULL;
    this->InitialOrders = EInitialOrderType::EIO_Idle;
    this->InitialTarget = NULL;
}

