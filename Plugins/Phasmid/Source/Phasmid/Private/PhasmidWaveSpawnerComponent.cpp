#include "PhasmidWaveSpawnerComponent.h"

class AActor;

void UPhasmidWaveSpawnerComponent::StopSpawner() {
}

void UPhasmidWaveSpawnerComponent::StartSpawner() {
}

void UPhasmidWaveSpawnerComponent::PauseSpawner() {
}

TArray<AActor*> UPhasmidWaveSpawnerComponent::GetCurrentWaveActors() {
    return TArray<AActor*>();
}

void UPhasmidWaveSpawnerComponent::ExecuteSpawnerCommand(EPhasmidWaveSpawnerCommand Command) {
}

void UPhasmidWaveSpawnerComponent::EndCurrentWave() {
}

int32 UPhasmidWaveSpawnerComponent::CurrentWaveIndex() const {
    return 0;
}

EPhasmidWaveSpawnerState UPhasmidWaveSpawnerComponent::CurrentState() const {
    return EPhasmidWaveSpawnerState::WaitingToActivate;
}

void UPhasmidWaveSpawnerComponent::AddActorsToSpawnerFast(TArray<AActor*> Actors) {
}

void UPhasmidWaveSpawnerComponent::AddActorsToSpawner(TArray<AActor*> Actors) {
}

UPhasmidWaveSpawnerComponent::UPhasmidWaveSpawnerComponent() {
    this->bStartEnabled = false;
    this->bLoopSpawner = false;
}

