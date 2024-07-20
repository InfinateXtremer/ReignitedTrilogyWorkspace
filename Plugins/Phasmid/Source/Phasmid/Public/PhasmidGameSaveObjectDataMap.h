#pragma once
#include "CoreMinimal.h"
#include "EInventoryType.h"
#include "GemHashArray.h"
#include "PhasmidObjectSaveDataList.h"
#include "PhasmidGameSaveObjectDataMap.generated.h"

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidGameSaveObjectDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPhasmidObjectSaveDataList> objectDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInventoryType, FGemHashArray> gemCollectionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, EInventoryType> gemHashTypeMap;
    
    FPhasmidGameSaveObjectDataMap();
};

