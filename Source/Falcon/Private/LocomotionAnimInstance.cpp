#include "LocomotionAnimInstance.h"

class UAnimationAsset;

bool ULocomotionAnimInstance::GetLocEnabled() const {
    return false;
}

UAnimationAsset* ULocomotionAnimInstance::GetLocAnim(int32 iSet, int32 iDir, int32 iGear, bool& Looping, float& tBlendIn, float& tBlendOut) const {
    return NULL;
}

ULocomotionAnimInstance::ULocomotionAnimInstance() {
}

