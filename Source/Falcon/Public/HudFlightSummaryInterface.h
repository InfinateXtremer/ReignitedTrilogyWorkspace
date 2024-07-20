#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EInventoryType.h"
#include "EFlightLevelResult.h"
#include "FlightResult.h"
#include "HudFlightSummaryInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class FALCON_API UHudFlightSummaryInterface : public UInterface {
    GENERATED_BODY()
};

class FALCON_API IHudFlightSummaryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlightSummaryShow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlightSummaryHide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlightSummaryConfigure(UObject* aOwner, EInventoryType flightReward, const TArray<FFlightResult>& targetResults, EFlightLevelResult FlightResult, float Time, float bestTime, int32 place);
    
};

