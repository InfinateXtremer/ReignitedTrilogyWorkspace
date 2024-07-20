#include "TransportManager.h"

class AActor;
class APortal;
class ULevel;
class UObject;

TEnumAsByte<EManagerState> ATransportManager::WaitForAddToWorld() {
    return EMS_IDLE;
}

void ATransportManager::UnloadTransportLevelsExcept(FMasterLevelData SavedRecord, bool unloadActiveTransportLevel) {
}

void ATransportManager::UnloadTransportLevels(bool unloadActiveTransportLevel) {
}

void ATransportManager::TurnLightingManagerOn_Implementation() {
}

void ATransportManager::TurnLightingManagerOff_Implementation() {
}

TEnumAsByte<EManagerState> ATransportManager::TickUnloadingLevels() {
    return EMS_IDLE;
}

TEnumAsByte<EManagerState> ATransportManager::TickNotifyDelay() {
    return EMS_IDLE;
}

TEnumAsByte<EManagerState> ATransportManager::TickLoadingLevels() {
    return EMS_IDLE;
}

TEnumAsByte<EManagerState> ATransportManager::TickIdle() {
    return EMS_IDLE;
}

void ATransportManager::Tick(float DeltaTime) {
}

void ATransportManager::SubLevelUnloadCompleted() {
}

void ATransportManager::StartAtLevel(const UObject* WorldContextObject, const FName& LevelPath, const TArray<FName> sublevelNames, bool isRestart, TEnumAsByte<EFalconLoadScreen::Type> loadScreenType, const FString& Checkpoint, FLatentActionInfo LatentInfo) {
}

void ATransportManager::ShowInventoryUI() {
}

void ATransportManager::SetIncomingLighting() {
}

void ATransportManager::SetActiveLevelVisibility(bool bIsVisible) {
}

void ATransportManager::QueueTransport(const UObject* WorldContextObject, const FName& LevelPath, const TArray<FName> sublevelNames, TEnumAsByte<ELevelTransportType> transportType, TEnumAsByte<ELevelRecordType> recordType, bool bMakeVisibleAfterLoad, const FString& Checkpoint, FLatentActionInfo LatentInfo, bool completeLoad, APortal* iSourcePortal, APortal* iTargetPortal) {
}

TEnumAsByte<EManagerState> ATransportManager::Notify() {
    return EMS_IDLE;
}

ULevel* ATransportManager::GetCurrentSublevelWithString(const FString& substring) {
    return NULL;
}

AActor* ATransportManager::FindPlayerStartActor(const UObject* WorldContextObject, const FString& ActorName, const FString& LevelName) {
    return NULL;
}

APortal* ATransportManager::FindPlayerSpawnTransform(const UObject* WorldContextObject, const FString& ActorName, FTransform& outSpawnTransform, const FString& LevelName) {
    return NULL;
}

void ATransportManager::CallOnPlayerReadyS3() {
}

void ATransportManager::CallOnPlayerReady() {
}

void ATransportManager::BeginDelayedStart() {
}

ATransportManager::ATransportManager() {
    this->FadeInOutTime = 1.00f;
    this->LevelOffset = 300000.00f;
    this->IncomingLightingManager = NULL;
}

