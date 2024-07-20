#include "PhasmidWorldEventListenerComponent.h"

void UPhasmidWorldEventListenerComponent::subscribeEventLevelRemovedFromWorld(bool listen) {
}

void UPhasmidWorldEventListenerComponent::subscribeEventLevelAddedToWorld(bool listen) {
}

UPhasmidWorldEventListenerComponent::UPhasmidWorldEventListenerComponent() {
    this->eventLevelAddedToWorld = false;
    this->eventLevelRemovedFromWorld = false;
}

