#pragma once
#include "CoreMinimal.h"
#include "EFlightLevelTargetType.h"
#include "FlightResult.generated.h"

USTRUCT(BlueprintType)
struct FFlightResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlightLevelTargetType Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool awardedPreviously;
    
    FALCON_API FFlightResult();
};

