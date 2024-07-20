#include "SP3_Projectile.h"
#include "SP3_ProjectileMovementComponent.h"

void ASP3_Projectile::ResetLifetime() {
}


int32 ASP3_Projectile::GetNumBounces() const {
    return 0;
}

void ASP3_Projectile::Explode() {
}

ASP3_Projectile::ASP3_Projectile() {
    this->m_topDown = false;
    this->m_lifetime = 3.50f;
    this->m_explodeTimeout = false;
    this->m_explodeImpact = 0.00f;
    this->m_colType = ESP3_ProjColType::Default;
    this->m_nBounceMax = 0;
    this->m_impactDmgAmt = 1.00f;
    this->m_impactDmgType = NULL;
    this->m_impactDmgEffect = NULL;
    this->m_blastRadius = 0.00f;
    this->m_explodeOnOverlapTarget = false;
    this->m_blastDmgAmt = 0.00f;
    this->m_blastDmgType = NULL;
    this->m_blastDmgEffect = NULL;
    this->Movement = CreateDefaultSubobject<USP3_ProjectileMovementComponent>(TEXT("Movement"));
}

