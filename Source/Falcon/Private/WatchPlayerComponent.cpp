#include "WatchPlayerComponent.h"

class ACharacter;

int32 UWatchPlayerComponent::TotalSightings() const {
    return 0;
}

void UWatchPlayerComponent::StopLooking() {
}

bool UWatchPlayerComponent::StartLooking() {
    return false;
}

int32 UWatchPlayerComponent::RecentSightings() const {
    return 0;
}

EPlayerVisibility UWatchPlayerComponent::PlayerVisibility() const {
    return EPlayerVisibility::DoesntSee;
}

ACharacter* UWatchPlayerComponent::GetPlayer() const {
    return NULL;
}

bool UWatchPlayerComponent::CanSeePlayer() const {
    return false;
}

UWatchPlayerComponent::UWatchPlayerComponent() {
    this->bUse2DVision = false;
    this->SightDistance = 125.00f;
    this->CosHalfAngle = 0.50f;
    this->bUseUnderwaterVision = false;
}

