#include "SP3_BoxerComponent.h"

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;

void USP3_BoxerComponent::RxTakeAnyDamage(AActor* Target, float dmgAmount, const UDamageType* dmgType, AController* Instigator, AActor* causer) {
}

void USP3_BoxerComponent::RxOverlapEnd(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USP3_BoxerComponent::RxOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void USP3_BoxerComponent::RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit) {
}

USP3_BoxerComponent::USP3_BoxerComponent() {
    this->m_animBlockHigh = NULL;
    this->m_animTaunt = NULL;
    this->m_animCelebrate = NULL;
    this->m_tQueue = 0.50f;
    this->m_blockInterrupt = false;
    this->m_dbgDraw = false;
}

