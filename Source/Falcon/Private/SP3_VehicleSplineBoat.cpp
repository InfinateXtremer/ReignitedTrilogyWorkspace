#include "SP3_VehicleSplineBoat.h"

class AActor;
class UPrimitiveComponent;

void ASP3_VehicleSplineBoat::RxOverlapEnd(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASP3_VehicleSplineBoat::RxOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void ASP3_VehicleSplineBoat::RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit) {
}


ASP3_VehicleSplineBoat::ASP3_VehicleSplineBoat() {
    this->m_offsetMax = 150.00f;
    this->m_gravity = 0.65f;
    this->m_contactDmgType = NULL;
    this->m_contactDmgAmt = 1.00f;
    this->m_tJumpMax = 0.25f;
    this->Spline = NULL;
}

