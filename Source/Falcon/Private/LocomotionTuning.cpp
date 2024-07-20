#include "LocomotionTuning.h"

FLocomotionTuning::FLocomotionTuning() {
    this->m_iForceSet = 0;
    this->m_predictTime = 0.00f;
    this->m_fwdBias = 0.00f;
    this->m_dirHyst = 0.00f;
    this->m_speedHyst = 0.00f;
    this->m_blendDefault = 0.00f;
    this->m_blendSideBack = 0.00f;
    this->m_blendStartStop = 0.00f;
    this->m_blendJumpLand = 0.00f;
    this->m_rotIKAxes = false;
    this->m_dbgDraw = false;
}

