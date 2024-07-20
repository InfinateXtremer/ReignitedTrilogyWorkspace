#include "SpawnTemplate.h"

FSpawnTemplate::FSpawnTemplate() {
    this->IsFriendly = false;
    this->SpawnType = NULL;
    this->SpawnPt = NULL;
    this->ClimbPath = NULL;
    this->BridgePath = NULL;
    this->LookAt = NULL;
    this->TriggeredSpawn = false;
    this->TriggeredStart = false;
    this->spawnedChar = NULL;
}

