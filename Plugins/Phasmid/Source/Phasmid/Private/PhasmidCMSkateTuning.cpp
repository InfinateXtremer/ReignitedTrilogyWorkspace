#include "PhasmidCMSkateTuning.h"

FPhasmidCMSkateTuning::FPhasmidCMSkateTuning() {
    this->GroundSpeed = 0.00f;
    this->GroundAccel = 0.00f;
    this->TurboSpeed = 0.00f;
    this->TurboAccel = 0.00f;
    this->MaxTurboPoints = 0.00f;
    this->MaxTurboUsedPerSecond = 0.00f;
    this->WheelRadius = 0.00f;
    this->RollFriction = 0.00f;
    this->RollAngVert = 0.00f;
    this->RollAngMaxY = 0.00f;
    this->RollAngMaxX = 0.00f;
    this->RollGravScalar = 0.00f;
    this->RollStickScalar = 0.00f;
    this->JumpHeight = 0.00f;
    this->JumpImpulseRamp = 0.00f;
    this->JumpImpulseAng = 0.00f;
    this->JumpImpulseVert = 0.00f;
    this->JumpRampDataTable = NULL;
    this->AirLevelInterp = 0.00f;
    this->AirJumpSteering = 0.00f;
    this->AirGravScalar = 0.00f;
    this->AirGlideFriction = 0.00f;
    this->AirVertAngle = 0.00f;
    this->AirVertPush = 0.00f;
    this->LandAngMaxUp = 0.00f;
    this->LandSideVelMax = 0.00f;
    this->LandSlopeMax = 0.00f;
    this->CrashTimeMin = 0.00f;
    this->CrashTimeMax = 0.00f;
    this->CrashFriction = 0.00f;
    this->ColDmgRadius = 0.00f;
    this->ColEmitClass = NULL;
    this->MaxSpeed = 0.00f;
    this->MaxSpeedWhenTurboAllowed = 0.00f;
    this->SlideAlongSurfaceCrashSpeed = 0.00f;
}

