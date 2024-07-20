#include "AnimNode_ProcChain.h"

FAnimNode_ProcChain::FAnimNode_ProcChain() {
    this->TwistAxis = EProcChainAxis::X_Positive;
    this->UpAxis = EProcChainAxis::X_Positive;
    this->Spring = 0.00f;
    this->DampWS = 0.00f;
    this->DampLS = 0.00f;
    this->Gravity = 0.00f;
    this->AngleMax = 0.00f;
    this->FPS = 0;
    this->DebugDraw = false;
}

