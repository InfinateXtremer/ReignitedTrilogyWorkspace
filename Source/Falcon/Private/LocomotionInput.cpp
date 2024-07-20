#include "LocomotionInput.h"

FLocomotionInput::FLocomotionInput() {
    this->m_enabled = false;
    this->m_noBlend = false;
    this->m_noFootIK = false;
    this->m_flipped = false;
    this->m_rotIK = false;
    this->m_iSet = 0;
    this->m_iDir = 0;
    this->m_iGear = 0;
    this->m_lean = 0.00f;
    this->m_rate = 0.00f;
    this->m_ikScale = 0.00f;
    this->m_startPos = 0.00f;
}

