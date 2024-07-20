#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "PhasmidSaveKeybindParam.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidSaveKeybindParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString paramName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey paramValue;
    
    PHASMID_API FPhasmidSaveKeybindParam();
};

