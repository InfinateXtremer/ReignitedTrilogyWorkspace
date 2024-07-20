#include "SpyroLoot.h"

class ACharacter;

void ASpyroLoot::StartSparxCollection(ACharacter* CollectingCharacter) {
}

void ASpyroLoot::StartContactCollection(ACharacter* CollectingCharacter) {
}

void ASpyroLoot::StartChargeCollection(ACharacter* CollectingCharacter) {
}

void ASpyroLoot::SparxLootSlurp(float DeltaTime) {
}


void ASpyroLoot::ChargeLootSlurp(float DeltaTime) {
}


ASpyroLoot::ASpyroLoot() {
    this->SparxCollectionDuration = 0.54f;
    this->MovingPositionLerpDuration = 0.27f;
    this->RotationSpeed = 180.00f;
    this->SparxCollectionHeightCurve = NULL;
    this->playerCharacter = NULL;
    this->CollectionSequenceState = ECollectionSequenceState::None;
    this->bManualLootRotation = false;
}

