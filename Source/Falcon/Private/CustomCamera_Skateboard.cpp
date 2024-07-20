#include "CustomCamera_Skateboard.h"

void ACustomCamera_Skateboard::ForceCutCamera() {
}

ACustomCamera_Skateboard::ACustomCamera_Skateboard() {
    this->m_yShift = 25.00f;
    this->m_crashDist = 120.00f;
    this->m_tgtPitch = -15.00f;
    this->m_maxPitchOffset = 10.00f;
    this->m_steadyTime = 0.50f;
}

