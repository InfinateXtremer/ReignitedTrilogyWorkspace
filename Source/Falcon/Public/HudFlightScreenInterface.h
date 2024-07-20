#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EFlightLevelTargetType.h"
#include "HudFlightScreenInterface.generated.h"

UINTERFACE(Blueprintable)
class FALCON_API UHudFlightScreenInterface : public UInterface {
    GENERATED_BODY()
};

class FALCON_API IHudFlightScreenInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlightScreenShow(UClass* flightScreenWidgetClass, float startingSeconds, bool orbChallenge, const TArray<EFlightLevelTargetType>& Targets);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlightScreenHide(UClass* flightScreenWidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float FlightScreenGetTimeRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float FlightScreenGetTimeElapsed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlightScreenCollect(UClass* flightScreenWidgetClass, EFlightLevelTargetType ItemType, float bonusSeconds);
    
};

