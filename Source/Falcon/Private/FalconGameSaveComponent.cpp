#include "FalconGameSaveComponent.h"

class AActor;
class UFalconSaveGame;

bool UFalconGameSaveComponent::SetGlobalFloatValue(const FString& Key, float Value) {
    return false;
}

bool UFalconGameSaveComponent::SetChangedKeybindValue(const FString& Key, FKey Value) {
    return false;
}

void UFalconGameSaveComponent::SetActiveSaveSlot(int32 Slot) {
}

void UFalconGameSaveComponent::SetActiveGame(int32 Game) {
}

void UFalconGameSaveComponent::SaveGame(EPhasmidSaveType saveType, const FString& LevelPath) {
}

void UFalconGameSaveComponent::RestoreObjects() {
}

void UFalconGameSaveComponent::restoreObjectDataFromSave(AActor* Actor) {
}

bool UFalconGameSaveComponent::RemoveChangedKeybindValue(const FString& Key) {
    return false;
}

void UFalconGameSaveComponent::objectStoreSerializedDataByName(const FString& objName, const FPhasmidObjectSaveDataList& dataList) {
}

void UFalconGameSaveComponent::objectStoreSerializedData(AActor* Actor, const FPhasmidObjectSaveDataList& dataList) {
}

void UFalconGameSaveComponent::objectStoreCheckpointDataByName(const FString& objName, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpointReached) {
}

void UFalconGameSaveComponent::objectStoreCheckpointData(AActor* Actor, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpointReached) {
}

void UFalconGameSaveComponent::objectSaveDataUpdated(AActor* Actor) {
}

void UFalconGameSaveComponent::LoadGameAsync(bool forceReload, bool skipRestore) {
}

void UFalconGameSaveComponent::LoadGame(bool forceReload, bool skipRestore) {
}

bool UFalconGameSaveComponent::IsSavingDisabled() {
    return false;
}

float UFalconGameSaveComponent::GetTimePlayedForSlot(int32 slotIndex) {
    return 0.0f;
}

void UFalconGameSaveComponent::GetSaveDataObjectListForType(const FString& LevelName, bool allLevels, EInventoryType inventoryType, TArray<FPhasmidGameSaveObjectData>& objectDataList) {
}

void UFalconGameSaveComponent::GetSaveDataObjectListForLevel(const FString& LevelName, TArray<FPhasmidGameSaveObjectData>& objectDataList) {
}

bool UFalconGameSaveComponent::getSaveDataForActorByName(const FString& ActorName, const FString& LevelName, FPhasmidObjectSaveDataList& dataList) {
    return false;
}

bool UFalconGameSaveComponent::getSaveDataForActor(AActor* Actor, const FString& LevelName, FPhasmidObjectSaveDataList& dataList) {
    return false;
}

bool UFalconGameSaveComponent::GetGlobalFloatValue(const FString& Key, float& Value) {
    return false;
}

UFalconSaveGame* UFalconGameSaveComponent::GetFalconSaveGameObject() {
    return NULL;
}

int32 UFalconGameSaveComponent::GetFalconInventoryCollectedCount(EInventoryType inventoryType, const FString& LevelName, bool CurrentLevel) {
    return 0;
}

bool UFalconGameSaveComponent::getCheckpointDataForActorByName(const FString& ActorName, FPhasmidObjectSaveDataList& dataList) {
    return false;
}

bool UFalconGameSaveComponent::GetChangedKeybindValue(const FString& Key, FKey& Value) {
    return false;
}

void UFalconGameSaveComponent::DeleteSave() {
}

UFalconGameSaveComponent::UFalconGameSaveComponent() {
    this->_saveInProgress = false;
    this->_falconSaveGame = NULL;
    this->_shadowFalconSaveGame = NULL;
    this->_tempSaveGameData = NULL;
    this->_doDebugPrint = false;
    this->_minSaveWait = 0.00f;
}

