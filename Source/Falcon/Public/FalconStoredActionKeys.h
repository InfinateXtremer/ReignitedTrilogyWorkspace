#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EPhasmidAction.h"
#include "FalconStoredActionKeys.generated.h"

USTRUCT(BlueprintType)
struct FFalconStoredActionKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhasmidAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey EntryOneKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EntryOneIsEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey EntryTwoKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EntryTwoIsEmpty;
    
    FALCON_API FFalconStoredActionKeys();
};

