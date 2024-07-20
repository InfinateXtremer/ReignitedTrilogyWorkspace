#pragma once
#include "CoreMinimal.h"
#include "PhasmidInventoryItem.h"
#include "PhasmidPlayerInventory.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidPlayerInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 treasure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidInventoryItem> Items;
    
    PHASMID_API FPhasmidPlayerInventory();
};

