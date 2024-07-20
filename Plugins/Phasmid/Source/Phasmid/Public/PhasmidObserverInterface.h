#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PhasmidObserverInterface.generated.h"

class UObject;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPhasmidObserverInterface : public UInterface {
    GENERATED_BODY()
};

class IPhasmidObserverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void RegisterObserver(UObject* Observer) PURE_VIRTUAL(RegisterObserver,);
    
};

