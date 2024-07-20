#include "SP3CharAbilParamsFlappyJump.h"

FSP3CharAbilParamsFlappyJump::FSP3CharAbilParamsFlappyJump() {
    this->m_gravity = 0.00f;
    this->m_height = 0.00f;
    this->m_rePressHeight = 0.00f;
    this->m_flapInterval = 0.00f;
    this->m_maxAirVelocity = 0.00f;
    this->m_moveScalar = 0.00f;
    this->m_rotSpeedV = 0.00f;
    this->m_fallVelocity = 0.00f;
    this->m_sideInputMoveStrength = 0.00f;
    this->m_flyCamClass = NULL;
    this->m_bombCamClass = NULL;
    this->m_analogThrust = false;
}

