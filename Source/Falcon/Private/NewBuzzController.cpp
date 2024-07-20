#include "NewBuzzController.h"

class AActor;

void ANewBuzzController::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

ANewBuzzController::ANewBuzzController() {
    this->GameFloorTotalRadius = 800.00f;
    this->GameFloorInnerRadius = 600.00f;
    this->DamageEffectClass = NULL;
    this->FlameCircleFX = NULL;
    this->FlameBreathFX = NULL;
    this->KnockbackMontage = NULL;
    this->BurningMontage = NULL;
    this->HopForwardMontage = NULL;
    this->HopLeftMontage = NULL;
    this->HopRightMontage = NULL;
    this->TauntMontage = NULL;
    this->FlameBreathMontage = NULL;
}

