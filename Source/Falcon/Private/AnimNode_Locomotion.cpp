#include "AnimNode_Locomotion.h"

FAnimNode_Locomotion::FAnimNode_Locomotion() {
    this->RootTurnAxis = ELocomotionAxis::X_Positive;
    this->RootLeanAxis = ELocomotionAxis::X_Positive;
    this->WeightSpine1 = 0.00f;
    this->WeightSpine2 = 0.00f;
    this->WeightSpine3 = 0.00f;
    this->AnkleAngMax = 0.00f;
    this->BlendExp = 0.00f;
    this->IKFootLock = 0.00f;
    this->IKIdleSlope = 0.00f;
    this->MatchGround = false;
    this->SlopeAdjRoot = 0.00f;
}

