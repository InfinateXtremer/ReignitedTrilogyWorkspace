#include "SP3_VehicleSub.h"

class AActor;
class UPrimitiveComponent;

void ASP3_VehicleSub::RxOverlapEnd(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASP3_VehicleSub::RxOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void ASP3_VehicleSub::RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit) {
}


ASP3_VehicleSub::ASP3_VehicleSub() {
    this->m_minThrust = 0.20f;
    this->m_oobTurnTime = 0.75f;
    this->m_dmgEffect = NULL;
    this->m_dmgImpact = 0.00f;
}

