#include "MasterLightingManager.h"
#include "Components/SkyLightComponent.h"

class APhasmidLightingManager;
class UObject;

void AMasterLightingManager::Tick(float DeltaTime) {
}

void AMasterLightingManager::SetLightingManager_Implementation(const UObject* WorldContextObject, APhasmidLightingManager* OutgoingLightingManager, APhasmidLightingManager* IncomingLightingManager, bool Delay) {
}

void AMasterLightingManager::SetCurrentLightsOn_Implementation() {
}

void AMasterLightingManager::SetCurrentLightsOff_Implementation() {
}

void AMasterLightingManager::CrossfadeLightingManagers_2_Implementation(APhasmidLightingManager* OutgoingLightingManager, APhasmidLightingManager* IncomingLightingManager, float Alpha) {
}

void AMasterLightingManager::CrossfadeLightingManagers_Implementation(const UObject* WorldContextObject, float fadeTime, APhasmidLightingManager* OutgoingLightingManager, APhasmidLightingManager* IncomingLightingManager, FLatentActionInfo LatentInfo) {
}

void AMasterLightingManager::BeginPlay() {
}

AMasterLightingManager::AMasterLightingManager() {
    this->outgoing_lm = NULL;
    this->incoming_lm = NULL;
    this->SkySphere = NULL;
    this->ShouldCapture = 1;
    this->MasterSkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("MasterSkyLightComponent"));
    this->CurrentLightingManager = NULL;
}

