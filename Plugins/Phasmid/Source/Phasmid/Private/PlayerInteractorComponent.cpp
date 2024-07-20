#include "PlayerInteractorComponent.h"

class UPhasmidInteractableComponent;

void UPlayerInteractorComponent::UpdateHighlighted_Implementation() {
}


void UPlayerInteractorComponent::Multicast_HighlightInteractable_Implementation(UPhasmidInteractableComponent* NewInteractable) {
}

void UPlayerInteractorComponent::Interact() {
}

UPlayerInteractorComponent::UPlayerInteractorComponent() {
    this->HighlightedComponent = NULL;
}

