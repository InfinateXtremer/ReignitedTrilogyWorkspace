#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PhasmidInventorySpawnerInterface.generated.h"

UINTERFACE(Blueprintable)
class PHASMID_API UPhasmidInventorySpawnerInterface : public UInterface {
    GENERATED_BODY()
};

class PHASMID_API IPhasmidInventorySpawnerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void spawnedInventoryItemCollected(int32 ID);
    
};

