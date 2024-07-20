#include "SP3_VehicleJet.h"

class AActor;
class UPrimitiveComponent;

void ASP3_VehicleJet::RxOverlapEnd(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASP3_VehicleJet::RxOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void ASP3_VehicleJet::RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit) {
}


ASP3_VehicleJet::ASP3_VehicleJet() {
    this->m_oobTurnTime = 0.75f;
    this->m_dmgEffect = NULL;
    this->m_dmgImpact = 0.00f;
}

