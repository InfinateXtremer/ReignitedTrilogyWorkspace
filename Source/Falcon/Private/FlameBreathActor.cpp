#include "FlameBreathActor.h"

AFlameBreathActor::AFlameBreathActor() {
    this->vfx = NULL;
    this->DamageEffectClass = NULL;
    this->Duration = 1.00f;
    this->MovementComponent = NULL;
    this->CollisionComponent = NULL;
}

