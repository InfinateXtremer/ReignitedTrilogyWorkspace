#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputCoreTypes.h"
#include "EInventoryType.h"
#include "EPhasmidSaveType.h"
#include "PhasmidGameSaveObjectData.h"
#include "PhasmidObjectSaveDataList.h"
#include "OnLoadGameAsyncCompleteDelegate.h"
#include "FalconGameSaveComponent.generated.h"

class AActor;
class UFalconModuleSaveGame;
class UFalconSaveGame;
class USaveGame;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UFalconGameSaveComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _saveInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFalconModuleSaveGame* _falconSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFalconModuleSaveGame* _shadowFalconSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGame* _tempSaveGameData;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadGameAsyncComplete OnLoadGameAsyncComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _saveSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _saveSlotNameOld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _doDebugPrint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _minSaveWait;
    
    UFalconGameSaveComponent();
    UFUNCTION(BlueprintCallable)
    bool SetGlobalFloatValue(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetChangedKeybindValue(const FString& Key, FKey Value);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveSaveSlot(int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveGame(int32 Game);
    
    UFUNCTION(BlueprintCallable)
    void SaveGame(EPhasmidSaveType saveType, const FString& LevelPath);
    
    UFUNCTION(BlueprintCallable)
    void RestoreObjects();
    
    UFUNCTION(BlueprintCallable)
    void restoreObjectDataFromSave(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveChangedKeybindValue(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void objectStoreSerializedDataByName(const FString& objName, const FPhasmidObjectSaveDataList& dataList);
    
    UFUNCTION(BlueprintCallable)
    void objectStoreSerializedData(AActor* Actor, const FPhasmidObjectSaveDataList& dataList);
    
    UFUNCTION(BlueprintCallable)
    void objectStoreCheckpointDataByName(const FString& objName, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpointReached);
    
    UFUNCTION(BlueprintCallable)
    void objectStoreCheckpointData(AActor* Actor, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpointReached);
    
    UFUNCTION(BlueprintCallable)
    void objectSaveDataUpdated(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void LoadGameAsync(bool forceReload, bool skipRestore);
    
    UFUNCTION(BlueprintCallable)
    void LoadGame(bool forceReload, bool skipRestore);
    
    UFUNCTION(BlueprintCallable)
    bool IsSavingDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimePlayedForSlot(int32 slotIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetSaveDataObjectListForType(const FString& LevelName, bool allLevels, EInventoryType inventoryType, TArray<FPhasmidGameSaveObjectData>& objectDataList);
    
    UFUNCTION(BlueprintCallable)
    void GetSaveDataObjectListForLevel(const FString& LevelName, TArray<FPhasmidGameSaveObjectData>& objectDataList);
    
    UFUNCTION(BlueprintCallable)
    bool getSaveDataForActorByName(const FString& ActorName, const FString& LevelName, FPhasmidObjectSaveDataList& dataList);
    
    UFUNCTION(BlueprintCallable)
    bool getSaveDataForActor(AActor* Actor, const FString& LevelName, FPhasmidObjectSaveDataList& dataList);
    
    UFUNCTION(BlueprintCallable)
    bool GetGlobalFloatValue(const FString& Key, float& Value);
    
    UFUNCTION(BlueprintCallable)
    UFalconSaveGame* GetFalconSaveGameObject();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFalconInventoryCollectedCount(EInventoryType inventoryType, const FString& LevelName, bool CurrentLevel);
    
    UFUNCTION(BlueprintCallable)
    bool getCheckpointDataForActorByName(const FString& ActorName, FPhasmidObjectSaveDataList& dataList);
    
    UFUNCTION(BlueprintCallable)
    bool GetChangedKeybindValue(const FString& Key, FKey& Value);
    
    UFUNCTION(BlueprintCallable)
    void DeleteSave();
    
};

