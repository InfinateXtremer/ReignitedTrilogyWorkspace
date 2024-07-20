#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AirshipInterface.generated.h"

class UFileMediaSource;

UINTERFACE(Blueprintable, MinimalAPI)
class UAirshipInterface : public UInterface {
    GENERATED_BODY()
};

class IAirshipInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMediaSource(UFileMediaSource* MediaSource);
    
};

