#include "BuzzController.h"

class AActor;

void ABuzzController::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

ABuzzController::ABuzzController() {
    this->SkillSet.AddDefaulted(5);
    this->HopDuration = 1.00f;
    this->HopDistance = 300.00f;
    this->FieldRadius = 300.00f;
    this->BlackboardAsset = NULL;
    this->BehaviorTreeAsset = NULL;
    this->DamageEffectClass = NULL;
}

