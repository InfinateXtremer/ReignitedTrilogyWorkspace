#include "FalconSaveGame.h"

void UFalconSaveGame::StoreSaveObjectData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, const FPhasmidObjectSaveDataList& saveDataList) {
}

void UFalconSaveGame::SetSaveParam(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, int32 paramIndex, const FPhasmidSaveParam& inParam, FPhasmidObjectSaveDataList& outDataList, bool& paramUpdated) {
}

void UFalconSaveGame::SetItemCollected(const FPhasmidObjectSaveDataList& inSaveDataList, int32 ItemIndex, FPhasmidObjectSaveDataList& outSaveDataList, bool& itemUpdated) {
}

bool UFalconSaveGame::SetGlobalFloatValue(const FString& Key, float Value) {
    return false;
}

bool UFalconSaveGame::SetChangedKeybindValue(const FString& Key, const FKey& ChangedKeybind) {
    return false;
}

bool UFalconSaveGame::RemoveChangedKeybindValue(const FString& Key) {
    return false;
}

bool UFalconSaveGame::MatchesTreasureType(EInventoryType inType) {
    return false;
}

void UFalconSaveGame::IsGemCollectedForLevel(int32 slotIndex, int32 gameIndex, const FString& LevelName, EInventoryType inventoryType, const FString& GemObjectName, bool& Result) {
}

bool UFalconSaveGame::IsGem(EInventoryType Filter) {
    return false;
}

void UFalconSaveGame::HashString(const FString& inString, int32& OutHash) {
}

int32 UFalconSaveGame::GetTreasureValue(EInventoryType inType) {
    return 0;
}

void UFalconSaveGame::GetSaveParam(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, int32 paramIndex, bool& paramFound, FString& outName, float& outValue) {
}

bool UFalconSaveGame::GetSaveObjectData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, FPhasmidObjectSaveDataList& saveDataList) {
    return false;
}

void UFalconSaveGame::GetItemCollected(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, bool& itemCollected, bool& itemFound) {
}

void UFalconSaveGame::getInventoryType(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, EInventoryType& Type, bool& itemFound) {
}

void UFalconSaveGame::GetInventoryItemList(int32 slotIndex, int32 gameIndex, const FString& Level, TArray<FPhasmidInventoryItem>& itemList) {
}

void UFalconSaveGame::GetInventoryCollectedCount(int32 slotIndex, int32 gameIndex, bool allLevels, const FString& Level, EInventoryType inventoryType, int32& Count) {
}

bool UFalconSaveGame::GetGlobalFloatValue(const FString& Key, float& Value) const {
    return false;
}

void UFalconSaveGame::GetGameSaveObjectDataListForInventoryType(int32 slotIndex, int32 gameIndex, EInventoryType inventoryType, bool allLevels, const FString& Level, TArray<FPhasmidGameSaveObjectData>& objectDataList) {
}

void UFalconSaveGame::GetGameSaveObjectDataList(int32 slotIndex, int32 gameIndex, const FString& Level, TArray<FPhasmidGameSaveObjectData>& objectDataList) {
}

void UFalconSaveGame::GetCollectedGemsForLevel(int32 slotIndex, int32 gameIndex, const FString& LevelName, TMap<EInventoryType, FGemHashArray>& gemCollectionMap) {
}

bool UFalconSaveGame::GetChangedKeybindData(const FString& Key, FKey& ChangedKeybind) const {
    return false;
}

void UFalconSaveGame::GetAllGlobalFloatData(TArray<FPhasmidSaveParam>& saveParams) const {
}

void UFalconSaveGame::GetAllChangedKeybindsData(TArray<FPhasmidSaveKeybindParam>& saveKeybindParams) const {
}

void UFalconSaveGame::DeleteSaveData(int32 slotIndex, int32 gameIndex) {
}

void UFalconSaveGame::debugPrintSave() const {
}

UFalconSaveGame::UFalconSaveGame() {
    this->saveDataMapArray.AddDefaulted(9);
}

