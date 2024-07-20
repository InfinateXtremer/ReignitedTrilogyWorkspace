#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HudFlightSummaryCallbackInterface.generated.h"

UINTERFACE(Blueprintable)
class FALCON_API UHudFlightSummaryCallbackInterface : public UInterface {
    GENERATED_BODY()
};

class FALCON_API IHudFlightSummaryCallbackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlightSummaryReply(int32 selected);
    
};

