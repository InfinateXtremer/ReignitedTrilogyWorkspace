#pragma once
#include "CoreMinimal.h"
#include "PurchaseOption.generated.h"

USTRUCT(BlueprintType)
struct FPurchaseOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    FALCON_API FPurchaseOption();
};

