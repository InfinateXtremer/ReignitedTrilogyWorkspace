#pragma once
#include "CoreMinimal.h"
#include "FalconScreenConfigData.generated.h"

USTRUCT(BlueprintType)
struct FFalconScreenConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FALCON_API FFalconScreenConfigData();
};

