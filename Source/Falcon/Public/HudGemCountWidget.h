#pragma once
#include "CoreMinimal.h"
#include "PhasmidGameSaveObjectDataMap.h"
#include "PhasmidObjectSaveDataList.h"
#include "EHudGemCountDisplayState.h"
#include "FalconWidget.h"
#include "HudGemCountWidget.generated.h"

class UFalconSaveGame;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FALCON_API UHudGemCountWidget : public UFalconWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHudGemCountDisplayState uiState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool countUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float countUpdateSecs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float countUpdateWait;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFalconSaveGame* SaveGame;
    
public:
    UHudGemCountWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplay();
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterSave();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSave();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStoreSaveData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSaveGame(UFalconSaveGame* incomingSaveGame);
    
};

