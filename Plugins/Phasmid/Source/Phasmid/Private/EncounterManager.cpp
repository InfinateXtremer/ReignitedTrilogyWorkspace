#include "EncounterManager.h"

class AActor;
class AEncounterManager;

void AEncounterManager::SetOverrideTargetForActor(AActor* Actor, AActor* OverrideTarget) {
}

void AEncounterManager::RegisterRangedAttack(AActor* Actor) {
}

void AEncounterManager::RegisterMeleeAttack(AActor* Actor) {
}

AEncounterManager* AEncounterManager::GetEncounter(AActor* Actor) {
    return NULL;
}

void AEncounterManager::EncounterStop() {
}

void AEncounterManager::EncounterStart() {
}

void AEncounterManager::EncounterResume() {
}

void AEncounterManager::EncounterPause() {
}

void AEncounterManager::EncounterKillAll() {
}

AEncounterManager::AEncounterManager() {
    this->MaximumMeleePositions = 6;
    this->InnerMeleeStandoffDistance = 300.00f;
    this->OuterMeleeStandoffDistance = 500.00f;
    this->MaximumSimultaneousAttackers = 1;
    this->MeleePositioningRelaxationDist = 200.00f;
    this->bUseMeleeRateLimit = false;
    this->MaximumMeleeAttackRate = 60.00f;
    this->MeleeAttackInterval = 6.00f;
    this->MeleeAttackDuration = 1.50f;
    this->MeleeTauntFrequency = 4.00f;
    this->TauntDuration = 2.00f;
    this->bUseRangedRateLimit = false;
    this->MaximumRangedAttackRate = 60.00f;
    this->RangedAttackInterval = 6.00f;
    this->RangedAttackDuration = 1.50f;
    this->MaxTargetDistance = 10000.00f;
    this->RepositionDistanceThresh = 300.00f;
    this->ShowDebug = false;
}

