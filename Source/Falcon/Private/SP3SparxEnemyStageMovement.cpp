#include "SP3SparxEnemyStageMovement.h"

FSP3SparxEnemyStageMovement::FSP3SparxEnemyStageMovement() {
    this->MoveType = ESP3SparxEnemyStageMoveType::Fixed;
    this->MoveSpeed = 0.00f;
    this->RotType = ESP3SparxEnemyStageRotType::Fixed;
    this->RotQuantize = 0.00f;
    this->RotInput = 0.00f;
    this->Spline = NULL;
}

