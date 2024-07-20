#include "RailShooter.h"

class AActor;
class ACharacter;
class UFalconEnemyStateComponent;

void ARailShooter::StartGame_Implementation() {
}

ACharacter* ARailShooter::SpawnByID(FName ID) {
    return NULL;
}

void ARailShooter::SetupGame() {
}

void ARailShooter::ResetGame_Implementation() {
}

void ARailShooter::Reset() {
}

void ARailShooter::OnSP3DeathStart(AActor* Actor) {
}

void ARailShooter::OnSP3DeathEnd(AActor* Actor) {
}

void ARailShooter::OnDestroy(AActor* Actor) {
}

void ARailShooter::OnDeathState(AActor* Actor, UFalconEnemyStateComponent* StateComponent) {
}

ACharacter* ARailShooter::FindSpawnedByID(FName ID) {
    return NULL;
}

void ARailShooter::EndGame_Implementation() {
}

void ARailShooter::DestroyAll() {
}

ARailShooter::ARailShooter() {
    this->SpawnCollisionMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    this->proximityTarget = NULL;
}

