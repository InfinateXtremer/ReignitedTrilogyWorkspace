#pragma once
#include "CoreMinimal.h"
#include "PhasmidObjectSaveData.h"
#include "PhasmidObjectSaveDataList.generated.h"

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidObjectSaveDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidObjectSaveData> saveDataList;
    
    FPhasmidObjectSaveDataList();
};

