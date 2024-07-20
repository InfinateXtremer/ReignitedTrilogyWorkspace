#include "EnemySpawnPool.h"

class AActor;
class UFalconEnemyStateComponent;

void AEnemySpawnPool::ShutdownSpawner() {
}




void AEnemySpawnPool::OnSP3DeathStart(AActor* Actor) {
}

void AEnemySpawnPool::OnSP3DeathEnd(AActor* Actor) {
}

void AEnemySpawnPool::OnDestroy(AActor* Actor) {
}

void AEnemySpawnPool::OnDeathState(AActor* Actor, UFalconEnemyStateComponent* StateComponent) {
}

void AEnemySpawnPool::DestroyAllEnemies() {
}

AEnemySpawnPool::AEnemySpawnPool() {
    this->bEnabledByDefault = false;
    this->SelectionPolicy = ESpawnPointPolicy::Random;
    this->MaxConcurrentSpawns = 1;
    this->ConcurrentOutletLimiter = -1;
    this->IgnoreMaxSpawns = true;
    this->MaxTotalSpawns = -1;
    this->SpawnOffscreen = false;
    this->UseSlowSpawn = true;
    this->ActivateRange = -1.00f;
    this->TimeBetweenSpawns = 1.00f;
    this->DefaultMontage = NULL;
    this->SpawnCollisionMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    this->EditorSprite = NULL;
    this->m_slowSpawn = NULL;
    this->SpawnOrderPolicy = ESpawnOrder::Sequential;
}

