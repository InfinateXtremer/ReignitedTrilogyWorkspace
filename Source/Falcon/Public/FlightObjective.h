#pragma once
#include "CoreMinimal.h"
#include "EInventoryType.h"
#include "EFlightLevelTargetType.h"
#include "FlightObjective.generated.h"

USTRUCT(BlueprintType)
struct FFlightObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlightLevelTargetType Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryType treasureReward;
    
    FALCON_API FFlightObjective();
};

