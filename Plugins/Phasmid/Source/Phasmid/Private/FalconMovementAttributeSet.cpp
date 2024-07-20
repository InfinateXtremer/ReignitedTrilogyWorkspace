#include "FalconMovementAttributeSet.h"

UFalconMovementAttributeSet::UFalconMovementAttributeSet() {
    this->GlideDescentMultiplier = -0.30f;
    this->FlyVerticalComponentMult = -1.50f;
    this->JumpGravityFlyUp = 0.00f;
    this->RotationInterpSpeed = 6.00f;
    this->MaxFlySpeedBoost = 0.00f;
    this->UnderwaterPitchRate = 150.00f;
    this->UnderwaterYawRate = 120.00f;
}

