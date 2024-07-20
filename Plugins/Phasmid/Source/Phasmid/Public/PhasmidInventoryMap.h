#pragma once
#include "CoreMinimal.h"
#include "EInventoryType.h"
#include "PhasmidInventoryMap.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidInventoryMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInventoryType, int32> inventoryMap;
    
    PHASMID_API FPhasmidInventoryMap();
};

