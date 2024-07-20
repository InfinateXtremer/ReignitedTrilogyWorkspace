#pragma once
#include "CoreMinimal.h"
#include "InputKeySequenceEntry.h"
#include "InputKeySequenceList.generated.h"

USTRUCT(BlueprintType)
struct FInputKeySequenceList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputKeySequenceEntry> _sequences;
    
    FALCON_API FInputKeySequenceList();
};

