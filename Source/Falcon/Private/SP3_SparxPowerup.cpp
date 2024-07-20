#include "SP3_SparxPowerup.h"

void ASP3_SparxPowerup::SetStartTransform(const FTransform& xfmWS) {
}


ASP3_SparxPowerup::ASP3_SparxPowerup() {
    this->m_level = -1;
    this->m_health = 0.00f;
    this->m_shield = 0.00f;
    this->m_retSpeed = 150.00f;
    this->m_collectTime = 1.00f;
}

