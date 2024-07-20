#pragma once
#include "CoreMinimal.h"
#include "KnockbackResponse.generated.h"

USTRUCT(BlueprintType)
struct FKnockbackResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcAngle;
    
    FALCON_API FKnockbackResponse();
};

