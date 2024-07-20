#pragma once
#include "CoreMinimal.h"
#include "GemHashArray.generated.h"

USTRUCT(BlueprintType)
struct FGemHashArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> GemHashArray;
    
    PHASMID_API FGemHashArray();
};

