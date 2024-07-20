#pragma once
#include "CoreMinimal.h"
#include "EInventoryType.h"
#include "PhasmidGameSaveObjectDataMap.h"
#include "PhasmidObjectSaveDataList.h"
#include "FalconWidget.h"
#include "HudInventoryCountWidget.generated.h"

class UFalconSaveGame;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FALCON_API UHudInventoryCountWidget : public UFalconWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInventoryType> inventoryCountTypes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFalconSaveGame* SaveGame;
    
public:
    UHudInventoryCountWidget();
    UFUNCTION(BlueprintCallable)
    void UnRegisterSave();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSave();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStoreSaveData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSaveGame(UFalconSaveGame* incomingSaveGame);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InventoryCountUpdated();
    
};

