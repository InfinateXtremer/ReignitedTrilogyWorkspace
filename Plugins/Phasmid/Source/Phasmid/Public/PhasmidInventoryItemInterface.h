#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EInventoryType.h"
#include "PhasmidInventoryItemInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class PHASMID_API UPhasmidInventoryItemInterface : public UInterface {
    GENERATED_BODY()
};

class PHASMID_API IPhasmidInventoryItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void setSpawnedData(UObject* spawner, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void setItemSaveData(bool serializeData, const FString& saveName, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInventoryType getInventoryType();
    
};

