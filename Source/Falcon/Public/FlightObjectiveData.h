#pragma once
#include "CoreMinimal.h"
#include "FlightObjective.h"
#include "FlightObjectiveData.generated.h"

USTRUCT(BlueprintType)
struct FFlightObjectiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlightObjective objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 collectedCount;
    
    FALCON_API FFlightObjectiveData();
};

