#include "SP3_ProjectileMovementComponent.h"

USP3_ProjectileMovementComponent::USP3_ProjectileMovementComponent() {
    this->Type = ESP3_ProjType::Default;
    this->LeadMax = 0.75f;
    this->InvertSpin = false;
    this->DebugDraw = false;
}

