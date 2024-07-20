#include "PhasmidSpawnPoint.h"

FTransform APhasmidSpawnPoint::GetSpawnTransform(const FVector& AdditionalOffset) {
    return FTransform{};
}

APhasmidSpawnPoint::APhasmidSpawnPoint() {
    this->Radius = 0.00f;
    this->bEnabled = true;
}

