

#pragma once

#include "CoreMinimal.h"
#include "PhasmidGameSaveLevelObjectMap.h"
#include "PhasmidInventoryItem.h"
#include "InventoryType.h"
#include "InputCoreTypes.h"
#include "PhasmidSaveKeybindParam.h"
#include "GameFramework/SaveGame.h"
#include "FalconSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFalconSaveGame : public USaveGame
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPhasmidGameSaveLevelObjectMap> saveDataMapArray;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, float> globalFloatMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FKey> changedKeybindingsMap;
	
	UFUNCTION(BlueprintCallable)
	void StoreSaveObjectData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, const FPhasmidObjectSaveDataList& saveDataList);
	UFUNCTION(BlueprintCallable)
	void SetSaveParam(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, int32 paramIndex, const FPhasmidSaveParam& inParam, FPhasmidObjectSaveDataList& outDataList, bool& paramUpdated);
	UFUNCTION(BlueprintCallable)
	void SetItemCollected(const FPhasmidObjectSaveDataList& inSaveDataList, int32 ItemIndex, FPhasmidObjectSaveDataList& outSaveDataList, bool& itemUpdated);
	UFUNCTION(BlueprintCallable)
	bool SetGlobalFloatValue(FString Key, float Value);
	UFUNCTION(BlueprintCallable)
	bool SetChangedKeybindValue(FString Key, const FKey& ChangedKeybind);
	UFUNCTION(BlueprintCallable)
	bool RemoveChangedKeybindValue(FString Key);
	UFUNCTION(BlueprintCallable)
	bool MatchesTreasureType(EInventoryType inType);
	UFUNCTION(BlueprintCallable)
	void IsGemCollectedForLevel(int32 slotIndex, int32 gameIndex, FString LevelName, EInventoryType inventoryType, FString GemObjectName, bool& Result);
	UFUNCTION(BlueprintCallable)
	bool IsGem(EInventoryType Filter);
	UFUNCTION(BlueprintCallable)
	void HashString(FString inString, int32& OutHash);
	UFUNCTION(BlueprintCallable)
	int32 GetTreasureValue(EInventoryType inType);
	UFUNCTION(BlueprintCallable)
	void GetSaveParam(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, int32 paramIndex, bool& paramFound, FString& outName, float& outValue);
	UFUNCTION(BlueprintCallable)
	bool GetSaveObjectData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, FPhasmidObjectSaveDataList& saveDataList);
	UFUNCTION(BlueprintCallable)
	void GetItemCollected(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, bool& itemCollected, bool& itemFound);
	UFUNCTION(BlueprintCallable)
	void getInventoryType(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, TEnumAsByte<EInventoryType>& Type, bool& itemFound);

	UFUNCTION(BlueprintCallable)
	void GetInventoryItemList(int32 slotIndex, int32 gameIndex, FString Level, TArray<FPhasmidInventoryItem>& itemList);
	UFUNCTION(BlueprintCallable)
	void GetInventoryCollectedCount(int32 slotIndex, int32 gameIndex, bool allLevels, FString Level, TEnumAsByte<EInventoryType> inventoryType, int32& Count);
	UFUNCTION(BlueprintCallable)
	bool GetGlobalFloatValue(FString Key, float& Value);
	UFUNCTION(BlueprintCallable)
	void GetGameSaveObjectDataListForInventoryType(int32 slotIndex, int32 gameIndex, TEnumAsByte<EInventoryType> inventoryType, bool allLevels, FString Level, TArray<FPhasmidGameSaveObjectData>& objectDataList);
	UFUNCTION(BlueprintCallable)
	void GetGameSaveObjectDataList(int32 slotIndex, int32 gameIndex, FString Level, TArray<FPhasmidGameSaveObjectData>& objectDataList);
	UFUNCTION(BlueprintCallable)
	void GetCollectedGemsForLevel(int32 slotIndex, int32 gameIndex, FString LevelName, TMap<TEnumAsByte<EInventoryType>, FGemHashArray>& gemCollectionMap);
	UFUNCTION(BlueprintCallable)
	bool GetChangedKeybindData(FString Key, FKey& ChangedKeybind);
	UFUNCTION(BlueprintCallable)
	void GetAllGlobalFloatData(TArray<FPhasmidSaveParam>& saveParams);

	UFUNCTION(BlueprintCallable)
	void GetAllChangedKeybindsData(TArray<FPhasmidSaveKeybindParam>& saveKeybindParams);
	UFUNCTION(BlueprintCallable)
	void DeleteSaveData(int32 slotIndex, int32 gameIndex);
	UFUNCTION(BlueprintCallable)
	void debugPrintSave();
};
