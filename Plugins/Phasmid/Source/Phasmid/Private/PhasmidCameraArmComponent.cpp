#include "PhasmidCameraArmComponent.h"

UPhasmidCameraArmComponent::UPhasmidCameraArmComponent() {
    this->bUsePitchOffset = false;
    this->MaxPitch = 0.00f;
    this->ArmAngularAccel = 2.00f;
    this->ArmAngularDecel = 10.00f;
    this->MaxArmAngularSpeed = 30.00f;
    this->OuterProbeSize = 5.00f;
    this->MinTimeScale = 0.50f;
}

