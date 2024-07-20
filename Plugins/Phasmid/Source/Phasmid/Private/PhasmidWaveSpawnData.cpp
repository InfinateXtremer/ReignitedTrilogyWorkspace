#include "PhasmidWaveSpawnData.h"

FPhasmidWaveSpawnData::FPhasmidWaveSpawnData() {
    this->SpawnClass = NULL;
    this->Num = 0;
    this->SpawnPattern = EPhasmidWaveSpawnPattern::Sequential;
    this->SpawnRate = 0.00f;
    this->SpawnTimer = 0.00f;
    this->InitialOrders = EInitialOrderType::EIO_Idle;
    this->InitialTarget = NULL;
    this->MaxCurrentSpawns = 0;
    this->MaxReinforcements = 0;
    this->ReinforcementsSpawned = 0;
    this->SpawnIndex = 0;
}

