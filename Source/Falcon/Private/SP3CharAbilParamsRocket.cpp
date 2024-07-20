#include "SP3CharAbilParamsRocket.h"

FSP3CharAbilParamsRocket::FSP3CharAbilParamsRocket() {
    this->m_speed = 0.00f;
    this->m_inheritVelH = 0.00f;
    this->m_inheritVelV = 0.00f;
    this->m_inheritOnlyForward = false;
    this->m_holdClass = NULL;
    this->m_projClass = NULL;
    this->m_rapidFire = false;
    this->m_relCam = false;
}

