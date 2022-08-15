

#include "FalconSaveGame.h"

void UFalconSaveGame::StoreSaveObjectData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, const FPhasmidObjectSaveDataList & saveDataList)
{
}

void UFalconSaveGame::SetSaveParam(const FPhasmidObjectSaveDataList & saveDataList, int32 ItemIndex, int32 paramIndex, const FPhasmidSaveParam & inParam, FPhasmidObjectSaveDataList & outDataList, bool & paramUpdated)
{
}

void UFalconSaveGame::SetItemCollected(const FPhasmidObjectSaveDataList & inSaveDataList, int32 ItemIndex, FPhasmidObjectSaveDataList & outSaveDataList, bool & itemUpdated)
{
}

bool UFalconSaveGame::SetGlobalFloatValue(FString Key, float Value)
{
	return false;
}

bool UFalconSaveGame::SetChangedKeybindValue(FString Key, const FKey & ChangedKeybind)
{
	return false;
}

bool UFalconSaveGame::RemoveChangedKeybindValue(FString Key)
{
	return false;
}

bool UFalconSaveGame::MatchesTreasureType(EInventoryType inType)
{
	return false;
}

void UFalconSaveGame::IsGemCollectedForLevel(int32 slotIndex, int32 gameIndex, FString LevelName, EInventoryType inventoryType, FString GemObjectName, bool & Result)
{
}

bool UFalconSaveGame::IsGem(EInventoryType Filter)
{
	return false;
}

void UFalconSaveGame::HashString(FString inString, int32 & OutHash)
{
}

int32 UFalconSaveGame::GetTreasureValue(EInventoryType inType)
{
	return int32();
}

void UFalconSaveGame::GetSaveParam(const FPhasmidObjectSaveDataList & saveDataList, int32 ItemIndex, int32 paramIndex, bool & paramFound, FString & outName, float & outValue)
{
}

bool UFalconSaveGame::GetSaveObjectData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, FPhasmidObjectSaveDataList & saveDataList)
{
	return false;
}

void UFalconSaveGame::GetItemCollected(const FPhasmidObjectSaveDataList & saveDataList, int32 ItemIndex, bool & itemCollected, bool & itemFound)
{
}

void UFalconSaveGame::getInventoryType(const FPhasmidObjectSaveDataList & saveDataList, int32 ItemIndex, TEnumAsByte<EInventoryType>& Type, bool & itemFound)
{
}

void UFalconSaveGame::GetInventoryItemList(int32 slotIndex, int32 gameIndex, FString Level, TArray<FPhasmidInventoryItem>& itemList)
{
}

void UFalconSaveGame::GetInventoryCollectedCount(int32 slotIndex, int32 gameIndex, bool allLevels, FString Level, TEnumAsByte<EInventoryType> inventoryType, int32 & Count)
{
}


bool UFalconSaveGame::GetGlobalFloatValue(FString Key, float & Value)
{
	return false;
}

void UFalconSaveGame::GetGameSaveObjectDataListForInventoryType(int32 slotIndex, int32 gameIndex, TEnumAsByte<EInventoryType> inventoryType, bool allLevels, FString Level, TArray<FPhasmidGameSaveObjectData>& objectDataList)
{
}


void UFalconSaveGame::GetGameSaveObjectDataList(int32 slotIndex, int32 gameIndex, FString Level, TArray<FPhasmidGameSaveObjectData>& objectDataList)
{
}

void UFalconSaveGame::GetCollectedGemsForLevel(int32 slotIndex, int32 gameIndex, FString LevelName, TMap<TEnumAsByte<EInventoryType>, FGemHashArray>& gemCollectionMap)
{
}

bool UFalconSaveGame::GetChangedKeybindData(FString Key, FKey & ChangedKeybind)
{
	return false;
}

void UFalconSaveGame::GetAllGlobalFloatData(TArray<FPhasmidSaveParam>& saveParams)
{
}

void UFalconSaveGame::GetAllChangedKeybindsData(TArray<FPhasmidSaveKeybindParam>& saveKeybindParams)
{
}

void UFalconSaveGame::DeleteSaveData(int32 slotIndex, int32 gameIndex)
{
}

void UFalconSaveGame::debugPrintSave()
{
}

