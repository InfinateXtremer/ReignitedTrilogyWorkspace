#include "SP3_VehicleSpeedBoat.h"

class AActor;
class UPrimitiveComponent;

void ASP3_VehicleSpeedBoat::RxOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void ASP3_VehicleSpeedBoat::RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit) {
}


ASP3_VehicleSpeedBoat::ASP3_VehicleSpeedBoat() {
    this->m_missileClass = NULL;
    this->m_dmgEffect = NULL;
    this->m_dmgImpact = 500.00f;
    this->m_boneTurret = TEXT("Turret_3");
    this->m_boneRocketL = TEXT("L_jet");
    this->m_boneRocketR = TEXT("R_jet");
    this->m_rapidFire = false;
    this->m_infiniteAmmo = false;
    this->m_uiAmmoClass = NULL;
}

