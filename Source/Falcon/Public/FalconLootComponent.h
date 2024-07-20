#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhasmidObjectSaveDataList.h"
#include "Templates/SubclassOf.h"
#include "FalconLootComponent.generated.h"

class APhasmidLevelActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UFalconLootComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APhasmidLevelActor>> CollectibleTypes;
    
    UFalconLootComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnLoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllLootCollected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getObjectSaveData(FPhasmidObjectSaveDataList& saveData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DropsLootOfType(UClass* LootClass, bool filterCollected) const;
    
};

