#pragma once
#include "CoreMinimal.h"
#include "RevengeGemSet.h"
#include "RevengeGemSets.generated.h"

USTRUCT(BlueprintType)
struct FRevengeGemSets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenGems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRevengeGemSet> GemSets;
    
    FALCON_API FRevengeGemSets();
};

