#include "SP3_AirCarryObject.h"

class AActor;
class USP3_CarrySocketComponent;


void ASP3_AirCarryObject::OnCarryObjectHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASP3_AirCarryObject::AttachToSocket(USP3_CarrySocketComponent* socket) {
}

ASP3_AirCarryObject::ASP3_AirCarryObject() {
    this->m_dropDamageAmount = 0.00f;
    this->m_dropDamageType = NULL;
    this->m_dropDamageEffect = NULL;
}

