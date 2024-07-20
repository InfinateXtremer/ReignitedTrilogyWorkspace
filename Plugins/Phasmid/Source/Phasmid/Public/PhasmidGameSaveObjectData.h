#pragma once
#include "CoreMinimal.h"
#include "PhasmidGameSaveObjectId.h"
#include "PhasmidObjectSaveDataList.h"
#include "PhasmidGameSaveObjectData.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidGameSaveObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidObjectSaveDataList saveDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidGameSaveObjectId objectId;
    
    PHASMID_API FPhasmidGameSaveObjectData();
};

