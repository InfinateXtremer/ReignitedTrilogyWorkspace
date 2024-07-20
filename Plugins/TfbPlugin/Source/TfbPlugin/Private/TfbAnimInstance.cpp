#include "TfbAnimInstance.h"

UTfbAnimInstance::UTfbAnimInstance() {
    this->bTrue = true;
    this->BigFloat = 10000000000.00f;
    this->SmallFloat = 0.10f;
    this->bIdleAnimationOption = false;
    this->AnimDelayMax = 10.00f;
    this->AnimDelayMin = 2.00f;
    this->bIsTalking = false;
    this->bIsJumping = false;
    this->bIsFalling = false;
    this->bIsDead = false;
    this->bIsSwimming = false;
    this->bIsDiving = false;
    this->bIsFlying = false;
    this->bHasReviveAnim = false;
    this->Speed = 0.00f;
    this->TurnRate = 0.00f;
    this->RunThreshold = 200.00f;
    this->InitialIdleStartOffset = 0.00f;
    this->IdleAnimation = NULL;
    this->IdleAnimation2 = NULL;
    this->TalkingAnimation = NULL;
    this->RunAnimation = NULL;
    this->WalkAnimation = NULL;
    this->JumpStartAnimation = NULL;
    this->JumpApexAnimation = NULL;
    this->FallingAnimation = NULL;
    this->LandingAnimation = NULL;
    this->DeathAnimation = NULL;
    this->ReviveAnimation = NULL;
    this->DiveAnimation = NULL;
    this->SwimAnimation = NULL;
    this->TakeOffAnimation = NULL;
    this->FlyAnimation = NULL;
}

