#pragma once
#include "CoreMinimal.h"
#include "EPhasmidAction.h"
#include "FalconKeyData.h"
#include "FalconInputData.generated.h"

USTRUCT(BlueprintType)
struct FFalconInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhasmidAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconKeyData EntryOneKeyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconKeyData EntryTwoKeyData;
    
    FALCON_API FFalconInputData();
};

