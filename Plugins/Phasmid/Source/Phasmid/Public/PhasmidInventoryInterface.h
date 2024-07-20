#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PhasmidInventoryItem.h"
#include "PhasmidInventoryInterface.generated.h"

UINTERFACE(Blueprintable)
class PHASMID_API UPhasmidInventoryInterface : public UInterface {
    GENERATED_BODY()
};

class PHASMID_API IPhasmidInventoryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 getInventory(TArray<FPhasmidInventoryItem>& Items);
    
};

