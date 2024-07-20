#include "SP3_SparxPropBase.h"

class AActor;
class UAnimMontage;

void ASP3_SparxPropBase::RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit) {
}

void ASP3_SparxPropBase::PlayMontage(UAnimMontage* Montage, float Rate) {
}


ASP3_SparxPropBase::ASP3_SparxPropBase() {
    this->m_healthMax = 1.00f;
}

