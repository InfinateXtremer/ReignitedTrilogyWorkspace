#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhasmidGameSaveObjectDataMap.h"
#include "PhasmidObjectSaveDataList.h"
#include "FanfareComponent.generated.h"

class UFalconSaveGame;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UFanfareComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFanfareComponent();
    UFUNCTION(BlueprintCallable)
    void OnStoreSaveData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSaveGame(UFalconSaveGame* incomingSaveGame);
    
};

