#pragma once
#include "CoreMinimal.h"
#include "PhasmidSaveParam.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidSaveParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString paramName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float paramValue;
    
    PHASMID_API FPhasmidSaveParam();
};

