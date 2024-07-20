#include "QuestActionsComponent.h"

bool UQuestActionsComponent::IsBound() const {
    return false;
}

void UQuestActionsComponent::EndAction() {
}

UQuestActionsComponent::UQuestActionsComponent() {
    this->m_pendingTask = NULL;
}

