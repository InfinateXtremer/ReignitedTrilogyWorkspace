#pragma once
#include "CoreMinimal.h"
#include "EPhasmidAction.h"
#include "InputKeySequenceEntry.generated.h"

USTRUCT(BlueprintType)
struct FInputKeySequenceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _sequenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPhasmidAction> _keyList;
    
    FALCON_API FInputKeySequenceEntry();
};

