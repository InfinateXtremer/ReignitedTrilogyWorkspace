#pragma once
#include "CoreMinimal.h"
#include "EInventoryType.h"
#include "PhasmidInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 quantity;
    
    PHASMID_API FPhasmidInventoryItem();
};

