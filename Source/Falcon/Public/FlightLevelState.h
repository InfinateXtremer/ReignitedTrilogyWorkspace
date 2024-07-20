#pragma once
#include "CoreMinimal.h"
#include "EFlightLevelTargetType.h"
#include "FlightObjectiveData.h"
#include "FlightLevelState.generated.h"

USTRUCT(BlueprintType)
struct FFlightLevelState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlightObjectiveData> objectiveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float currentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlightLevelTargetType lastTargetCollected;
    
    FALCON_API FFlightLevelState();
};

