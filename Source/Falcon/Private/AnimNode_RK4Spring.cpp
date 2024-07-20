#include "AnimNode_RK4Spring.h"

FAnimNode_RK4Spring::FAnimNode_RK4Spring() {
    this->TwistAxis = ERK4SpringAxis::X_Positive;
    this->UpAxis = ERK4SpringAxis::X_Positive;
    this->Length = 0.00f;
    this->Gravity = 0.00f;
    this->DebugDraw = false;
}

