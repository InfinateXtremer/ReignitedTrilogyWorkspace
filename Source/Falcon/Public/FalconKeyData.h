#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "PhasmidIconReturnData.h"
#include "FalconKeyData.generated.h"

USTRUCT(BlueprintType)
struct FFalconKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidIconReturnData IconData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNone;
    
    FALCON_API FFalconKeyData();
};

