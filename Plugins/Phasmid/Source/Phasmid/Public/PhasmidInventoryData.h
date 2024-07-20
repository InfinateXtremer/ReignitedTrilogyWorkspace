#pragma once
#include "CoreMinimal.h"
#include "EInventoryType.h"
#include "PhasmidInventoryData.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidInventoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool collected;
    
    PHASMID_API FPhasmidInventoryData();
};

