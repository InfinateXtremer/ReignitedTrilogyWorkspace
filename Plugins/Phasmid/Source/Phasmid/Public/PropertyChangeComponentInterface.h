#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PropertyChangeComponentInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPropertyChangeComponentInterface : public UInterface {
    GENERATED_BODY()
};

class IPropertyChangeComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PropogatePropertyChange();
    
};

