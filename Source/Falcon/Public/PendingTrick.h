#pragma once
#include "CoreMinimal.h"
#include "PendingTrick.generated.h"

USTRUCT(BlueprintType)
struct FPendingTrick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrickId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdjustedScore;
    
    FALCON_API FPendingTrick();
};

