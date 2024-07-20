#include "PhasmidCombatCoordinatorComponent.h"

class AAIController;
class AActor;
class AEncounterManager;
class UEnvQuery;
class UObject;

void UPhasmidCombatCoordinatorComponent::RequestCoverPoint(UObject* Target, UEnvQuery* CoverSelectionQuery) {
}

void UPhasmidCombatCoordinatorComponent::ReleaseCoverPoint(UObject* Target) {
}

void UPhasmidCombatCoordinatorComponent::NotifyFailedToFindCover_Implementation(UObject* RequestingObject) {
}

void UPhasmidCombatCoordinatorComponent::NotifyEnemyAlerted_Implementation(AEncounterManager* Encounter, AActor* AlertedEnemy, bool FirstAlert) {
}

void UPhasmidCombatCoordinatorComponent::NotifyEncounterCompleted_Implementation(AEncounterManager* Encounter) {
}

void UPhasmidCombatCoordinatorComponent::NotifyEncounterActivated_Implementation(AEncounterManager* Encounter) {
}

void UPhasmidCombatCoordinatorComponent::NotifyCoverAssigned_Implementation(UObject* RequestingObject, const FPhasmidCoverLine& CoverPoint) {
}

void UPhasmidCombatCoordinatorComponent::NotifyCombatStarted_Implementation(AEncounterManager* Encounter) {
}

void UPhasmidCombatCoordinatorComponent::NotifyCombatEnded_Implementation(AEncounterManager* Encounter) {
}

void UPhasmidCombatCoordinatorComponent::BP_RegisterRangedAttack(AAIController* Controller) {
}

void UPhasmidCombatCoordinatorComponent::BP_RegisterMeleeAttack(AAIController* Controller) {
}

UPhasmidCombatCoordinatorComponent::UPhasmidCombatCoordinatorComponent() {
    this->bGenerateCover = true;
    this->bDrawCover = false;
    this->MaxTargetDistance = 10000.00f;
    this->MeleePositioningRelaxationDist = 500.00f;
    this->RepositionDistanceThresh = 300.00f;
    this->OuterMeleeStandoffDistance = 450.00f;
    this->MaximumSimultaneousAttackers = 8;
    this->MaximumMeleePositions = 6;
    this->InnerMeleeStandoffDistance = 400.00f;
    this->MaximumMeleeAttackRate = 60.00f;
    this->MaximumRangedAttackRate = 60.00f;
    this->MeleeAttackInterval = 0.50f;
    this->MeleeAttackDuration = 1.50f;
    this->RangedAttackInterval = 0.50f;
    this->RangedAttackDuration = 1.50f;
    this->MeleeTauntFrequency = 4.00f;
    this->TauntDuration = 2.00f;
}

