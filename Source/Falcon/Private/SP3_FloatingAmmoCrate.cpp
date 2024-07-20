#include "SP3_FloatingAmmoCrate.h"


ASP3_FloatingAmmoCrate::ASP3_FloatingAmmoCrate() {
    this->m_delayTime = 10.00f;
    this->m_thickness = 15.00f;
    this->m_gravity = -85.00f;
    this->m_ascentAccel = 150.00f;
    this->m_ascentFriction = 0.05f;
    this->m_resetAmmo = false;
    this->m_tickWhenRendered = false;
}

