#include "PhasmidSniperPoint.h"

bool APhasmidSniperPoint::CanBeClaimed() const {
    return false;
}

APhasmidSniperPoint::APhasmidSniperPoint() {
    this->bEnabled = true;
}

