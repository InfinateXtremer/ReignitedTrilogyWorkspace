#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputCoreTypes.h"
#include "PhasmidObjectSaveDataList.h"
#include "PhasmidManagerSaveInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class PHASMID_API UPhasmidManagerSaveInterface : public UInterface {
    GENERATED_BODY()
};

class PHASMID_API IPhasmidManagerSaveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetGlobalFloatValue(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetChangedKeybindValue(const FString& Key, FKey Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveSlot(int32 slotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveGame(int32 gameIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void restoreObjectDataFromSave(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveChangedKeybindValue(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void objectStoreSerializedDataByName(const FString& ObjectName, const FPhasmidObjectSaveDataList& dataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void objectStoreSerializedData(const AActor* Actor, const FPhasmidObjectSaveDataList& dataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void objectStoreCheckpointDataByName(const FString& Name, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void objectStoreCheckpointData(const AActor* Actor, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void objectSaveDataUpdated(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool getSaveDataForActorByName(const FString& ActorName, const FString& Level, FPhasmidObjectSaveDataList& dataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool getSaveDataForActor(const AActor* Actor, const FString& Level, FPhasmidObjectSaveDataList& dataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetGlobalFloatValue(const FString& Key, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool getCheckpointDataForActorByName(const FString& ActorName, FPhasmidObjectSaveDataList& dataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetChangedKeybindValue(const FString& Key, FKey& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeleteSave();
    
};

