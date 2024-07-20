#include "PhasmidNavPostManager.h"

APhasmidNavPostManager::APhasmidNavPostManager() {
    this->MaxCoverDistance = 500.00f;
    this->CoverWeight = 0.50f;
    this->CoverExponent = 2.00f;
    this->ViewWeight = 0.50f;
    this->ViewExponent = 2.00f;
    this->ResolutionHorizontal = 500.00f;
    this->ResolutionVertical = 100.00f;
    this->NavMesh = NULL;
    this->DebugVisualize = false;
}

