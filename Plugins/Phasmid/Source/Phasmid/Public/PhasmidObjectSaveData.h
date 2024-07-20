#pragma once
#include "CoreMinimal.h"
#include "PhasmidInventoryData.h"
#include "PhasmidSaveParamList.h"
#include "PhasmidObjectSaveData.generated.h"

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidObjectSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidInventoryData itemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidSaveParamList itemParamList;
    
    FPhasmidObjectSaveData();
};

