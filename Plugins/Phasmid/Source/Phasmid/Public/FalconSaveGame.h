#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "InputCoreTypes.h"
#include "EInventoryType.h"
#include "GemHashArray.h"
#include "PhasmidGameSaveLevelObjectMap.h"
#include "PhasmidGameSaveObjectData.h"
#include "PhasmidInventoryItem.h"
#include "PhasmidObjectSaveDataList.h"
#include "PhasmidSaveKeybindParam.h"
#include "PhasmidSaveParam.h"
#include "FalconSaveGame.generated.h"

UCLASS(Blueprintable)
class PHASMID_API UFalconSaveGame : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidGameSaveLevelObjectMap> saveDataMapArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FString, float> globalFloatMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FString, FKey> changedKeybindingsMap;
    
public:
    UFalconSaveGame();
    UFUNCTION(BlueprintCallable)
    void StoreSaveObjectData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, const FPhasmidObjectSaveDataList& saveDataList);
    
    UFUNCTION(BlueprintCallable)
    static void SetSaveParam(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, int32 paramIndex, const FPhasmidSaveParam& inParam, FPhasmidObjectSaveDataList& outDataList, bool& paramUpdated);
    
    UFUNCTION(BlueprintCallable)
    static void SetItemCollected(const FPhasmidObjectSaveDataList& inSaveDataList, int32 ItemIndex, FPhasmidObjectSaveDataList& outSaveDataList, bool& itemUpdated);
    
    UFUNCTION(BlueprintCallable)
    bool SetGlobalFloatValue(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetChangedKeybindValue(const FString& Key, const FKey& ChangedKeybind);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveChangedKeybindValue(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static bool MatchesTreasureType(EInventoryType inType);
    
    UFUNCTION(BlueprintCallable)
    void IsGemCollectedForLevel(int32 slotIndex, int32 gameIndex, const FString& LevelName, EInventoryType inventoryType, const FString& GemObjectName, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGem(EInventoryType Filter);
    
    UFUNCTION(BlueprintCallable)
    static void HashString(const FString& inString, int32& OutHash);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTreasureValue(EInventoryType inType);
    
    UFUNCTION(BlueprintCallable)
    static void GetSaveParam(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, int32 paramIndex, bool& paramFound, FString& outName, float& outValue);
    
    UFUNCTION(BlueprintCallable)
    bool GetSaveObjectData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, FPhasmidObjectSaveDataList& saveDataList);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemCollected(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, bool& itemCollected, bool& itemFound);
    
    UFUNCTION(BlueprintCallable)
    static void getInventoryType(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, EInventoryType& Type, bool& itemFound);
    
    UFUNCTION(BlueprintCallable)
    void GetInventoryItemList(int32 slotIndex, int32 gameIndex, const FString& Level, TArray<FPhasmidInventoryItem>& itemList);
    
    UFUNCTION(BlueprintCallable)
    void GetInventoryCollectedCount(int32 slotIndex, int32 gameIndex, bool allLevels, const FString& Level, EInventoryType inventoryType, int32& Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGlobalFloatValue(const FString& Key, float& Value) const;
    
    UFUNCTION(BlueprintCallable)
    void GetGameSaveObjectDataListForInventoryType(int32 slotIndex, int32 gameIndex, EInventoryType inventoryType, bool allLevels, const FString& Level, TArray<FPhasmidGameSaveObjectData>& objectDataList);
    
    UFUNCTION(BlueprintCallable)
    void GetGameSaveObjectDataList(int32 slotIndex, int32 gameIndex, const FString& Level, TArray<FPhasmidGameSaveObjectData>& objectDataList);
    
    UFUNCTION(BlueprintCallable)
    void GetCollectedGemsForLevel(int32 slotIndex, int32 gameIndex, const FString& LevelName, TMap<EInventoryType, FGemHashArray>& gemCollectionMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChangedKeybindData(const FString& Key, FKey& ChangedKeybind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllGlobalFloatData(TArray<FPhasmidSaveParam>& saveParams) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllChangedKeybindsData(TArray<FPhasmidSaveKeybindParam>& saveKeybindParams) const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteSaveData(int32 slotIndex, int32 gameIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void debugPrintSave() const;
    
};

