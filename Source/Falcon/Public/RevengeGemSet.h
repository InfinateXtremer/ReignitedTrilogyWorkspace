#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RevengeGemSet.generated.h"

class ASpyroLoot;

USTRUCT(BlueprintType)
struct FRevengeGemSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpyroLoot> GemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GemValue;
    
    FALCON_API FRevengeGemSet();
};

