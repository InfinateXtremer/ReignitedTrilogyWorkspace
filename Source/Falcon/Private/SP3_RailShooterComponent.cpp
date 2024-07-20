#include "SP3_RailShooterComponent.h"

class AActor;

void USP3_RailShooterComponent::RxTakeDamage(AActor* sender, const FGameplayEventData Payload) {
}

void USP3_RailShooterComponent::RxDeath(AActor* sender, const FGameplayEventData Payload) {
}

USP3_RailShooterComponent::USP3_RailShooterComponent() {
    this->m_moveSpeed = 250.00f;
    this->m_gunBone = TEXT("L_wrist");
    this->m_dbgDraw = false;
    this->m_uiReticle = NULL;
}

