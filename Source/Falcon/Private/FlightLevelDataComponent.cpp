#include "FlightLevelDataComponent.h"

void UFlightLevelDataComponent::SetTargetCollected(const EFlightLevelTargetType targetType) {
}

void UFlightLevelDataComponent::SetBestTime(float bestTime) {
}

void UFlightLevelDataComponent::SetBestRaceTime(float bestRaceTime) {
}

bool UFlightLevelDataComponent::GetTargetCollected(const EFlightLevelTargetType targetType) const {
    return false;
}

bool UFlightLevelDataComponent::GetBestTimeFromSaveData(const FPhasmidObjectSaveDataList& saveData, float& aBestTime) {
    return false;
}

float UFlightLevelDataComponent::GetBestTime() const {
    return 0.0f;
}

float UFlightLevelDataComponent::GetBestRaceTime() const {
    return 0.0f;
}

UFlightLevelDataComponent::UFlightLevelDataComponent() {
}

