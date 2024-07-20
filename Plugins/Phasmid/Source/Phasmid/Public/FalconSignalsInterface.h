#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "FalconSignalsInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UFalconSignalsInterface : public UInterface {
    GENERATED_BODY()
};

class IFalconSignalsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RecieveSignals(AActor* SenderActor, const FGameplayTagContainer& Signals);
    
};

