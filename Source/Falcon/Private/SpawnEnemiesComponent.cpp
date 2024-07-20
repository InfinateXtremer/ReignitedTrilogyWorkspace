#include "SpawnEnemiesComponent.h"

USpawnEnemiesComponent::USpawnEnemiesComponent() {
    this->bEnabledByDefault = false;
    this->TimeBetweenSpawns = 1.00f;
    this->EnemySpawnPool = NULL;
    this->EnemySpawnPoint = NULL;
    this->SpawningMontage = NULL;
}

