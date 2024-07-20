#pragma once
#include "CoreMinimal.h"
#include "PhasmidSaveParam.h"
#include "PhasmidSaveParamList.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidSaveParamList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidSaveParam> saveParams;
    
    PHASMID_API FPhasmidSaveParamList();
};

