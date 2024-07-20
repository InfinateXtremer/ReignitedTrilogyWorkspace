#include "WaterProcessVolumeController.h"

void AWaterProcessVolumeController::Tick(float DeltaSeconds) {
}

float AWaterProcessVolumeController::GetCurrentFadeValue() {
    return 0.0f;
}

void AWaterProcessVolumeController::BeginPlay() {
}

AWaterProcessVolumeController::AWaterProcessVolumeController() {
    this->WaterVolume = NULL;
    this->BaseValue = 0.00f;
    this->currentFadeValue = 0.00f;
    this->CameraManager = NULL;
    this->CurrentFadeTime = 0.00f;
}

