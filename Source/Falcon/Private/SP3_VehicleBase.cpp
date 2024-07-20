#include "SP3_VehicleBase.h"

class ACameraActor;
class APawn;


APawn* ASP3_VehicleBase::GetDriver() const {
    return NULL;
}

ACameraActor* ASP3_VehicleBase::GetCamera() const {
    return NULL;
}

ASP3_VehicleBase::ASP3_VehicleBase() {
    this->m_hilightTime = 0.25f;
    this->m_releaseTime = 1.00f;
    this->m_camClass = NULL;
    this->m_camInterp = 1.50f;
    this->m_healthMax = 1.00f;
}

