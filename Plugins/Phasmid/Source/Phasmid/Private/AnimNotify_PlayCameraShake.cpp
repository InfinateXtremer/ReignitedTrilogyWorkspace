#include "AnimNotify_PlayCameraShake.h"

UAnimNotify_PlayCameraShake::UAnimNotify_PlayCameraShake() {
    this->ShakeClass = NULL;
    this->Scale = 1.00f;
    this->PlaySpace = ECameraAnimPlaySpace::CameraLocal;
}

