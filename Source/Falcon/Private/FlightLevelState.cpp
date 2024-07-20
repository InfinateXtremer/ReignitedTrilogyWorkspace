#include "FlightLevelState.h"

FFlightLevelState::FFlightLevelState() {
    this->bestTime = 0.00f;
    this->currentTime = 0.00f;
    this->lastTargetCollected = EFlightLevelTargetType::EFLT_None;
}

