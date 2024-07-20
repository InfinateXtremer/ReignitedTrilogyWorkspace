#include "FlightResult.h"

FFlightResult::FFlightResult() {
    this->Target = EFlightLevelTargetType::EFLT_None;
    this->Count = 0;
    this->awardedPreviously = false;
}

