#include "PhasmidPlayerController.h"

void APhasmidPlayerController::SetInputCameraAxisY(float Val) {
}

void APhasmidPlayerController::SetInputCameraAxisX(float Val) {
}

void APhasmidPlayerController::SetEnemyTickInterval(float Interval) {
}

void APhasmidPlayerController::GetSkateInputs(bool& trick, bool& Jump, bool& turbo) const {
}

void APhasmidPlayerController::GetPlayerImage(EImageSize DesiredSize, FOnGetPlayerImageComplete OnGetPlayerImageComplete) {
}

FVector2D APhasmidPlayerController::GetMoveAxes() const {
    return FVector2D{};
}

FVector2D APhasmidPlayerController::GetCameraAxes() const {
    return FVector2D{};
}

APhasmidPlayerController::APhasmidPlayerController() {
    this->bUseBlueprintCameraInput = false;
}

