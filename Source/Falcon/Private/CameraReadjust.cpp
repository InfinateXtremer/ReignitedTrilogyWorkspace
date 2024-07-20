#include "CameraReadjust.h"

class AActor;

void UCameraReadjust::SetCameraLookAtTarget(AActor* Target) {
}

void UCameraReadjust::HardCancel() {
}

void UCameraReadjust::CameraReset(float Timer) {
}

void UCameraReadjust::CameraReadjust(AActor* Destination, bool Teleport, float Speed, bool Custom) {
}

void UCameraReadjust::CameraAutoadjust(AActor* talker) {
}

UCameraReadjust::UCameraReadjust() {
    this->Resetting = false;
    this->CameraCenter = NULL;
}

