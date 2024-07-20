#include "SP3_CharacterComponent.h"

class AActor;
class UAnimSequenceBase;
class UPrimitiveComponent;

void USP3_CharacterComponent::UnblockAbility(ESP3CharAbility iAbil) {
}

void USP3_CharacterComponent::StopVOEvent() {
}

void USP3_CharacterComponent::SetAbilityBlocked(ESP3CharAbility iAbil, bool Blocked) {
}

void USP3_CharacterComponent::RxTakeDamage(AActor* sender, const FGameplayEventData Payload) {
}

void USP3_CharacterComponent::RxOverlapEnd(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USP3_CharacterComponent::RxOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void USP3_CharacterComponent::RxDeath(AActor* sender, const FGameplayEventData Payload) {
}

void USP3_CharacterComponent::RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit) {
}

void USP3_CharacterComponent::PlayVOEvent(FName evtName, UAnimSequenceBase* Anim, float Duration, bool fullBody) {
}

UAnimSequenceBase* USP3_CharacterComponent::GetVOAnim() const {
    return NULL;
}

bool USP3_CharacterComponent::GetAbilityBlocked(ESP3CharAbility iAbil) const {
    return false;
}

bool USP3_CharacterComponent::GetAbilActive(ESP3CharAbility iAbil) const {
    return false;
}

void USP3_CharacterComponent::BlockAbility(ESP3CharAbility iAbil) {
}

USP3_CharacterComponent::USP3_CharacterComponent() {
    this->m_isNPC = true;
    this->m_isFPS = false;
    this->m_autoStrafe = false;
    this->m_walkSpeed = 150.00f;
    this->m_walkAngle = 135.00f;
    this->m_gravityScalar = 0.75f;
    this->m_fallFriction = 0.00f;
    this->m_landTime = 0.15f;
    this->m_damageTime = 1.25f;
    this->m_idleTime = 5.00f;
    this->m_uiReticle = NULL;
}

