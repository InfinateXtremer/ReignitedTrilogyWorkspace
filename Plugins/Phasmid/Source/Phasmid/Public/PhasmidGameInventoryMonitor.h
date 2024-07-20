#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInventoryType.h"
#include "PhasmidInventoryItem.h"
#include "PhasmidInventoryMap.h"
#include "PhasmidGameInventoryMonitor.generated.h"

UCLASS(Blueprintable)
class PHASMID_API APhasmidGameInventoryMonitor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool autoUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPhasmidInventoryMap> gameMap;
    
    APhasmidGameInventoryMonitor();
    UFUNCTION(BlueprintCallable)
    void getLevelInventoryTotals(const FString& Level, TArray<FPhasmidInventoryItem>& itemList);
    
    UFUNCTION(BlueprintCallable)
    void getInventoryTotalsByLevelsAndTypes(const TArray<FString>& levelList, const TArray<EInventoryType>& itemTypeList, TArray<FPhasmidInventoryItem>& totalsList);
    
    UFUNCTION(BlueprintCallable)
    void getGameInventoryTotals(TArray<FPhasmidInventoryItem>& itemList);
    
    UFUNCTION(BlueprintCallable)
    void doUpdateInventory();
    
};

