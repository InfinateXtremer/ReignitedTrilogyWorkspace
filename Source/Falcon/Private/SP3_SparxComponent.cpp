#include "SP3_SparxComponent.h"

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;

void USP3_SparxComponent::RxTfBTakeDamage(AActor* sender, const FGameplayEventData Payload) {
}

void USP3_SparxComponent::RxTfBDeath(AActor* sender, const FGameplayEventData Payload) {
}

void USP3_SparxComponent::RxTakeAnyDamage(AActor* Target, float dmgAmount, const UDamageType* dmgType, AController* Instigator, AActor* causer) {
}

void USP3_SparxComponent::RxOverlapEnd(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USP3_SparxComponent::RxOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void USP3_SparxComponent::RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit) {
}

bool USP3_SparxComponent::IsShieldActive() const {
    return false;
}

bool USP3_SparxComponent::IsDashActive() const {
    return false;
}

//void USP3_SparxComponent::HandleOnNewInputSourceDetected(EInputSource NewSource) {
//}

USP3_SparxComponent::USP3_SparxComponent() {
    this->m_uiAmmoClass = NULL;
    this->m_uiShieldTimeBarClass = NULL;
}

