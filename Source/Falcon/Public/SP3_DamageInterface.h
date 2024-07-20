#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SP3_DamageInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class USP3_DamageInterface : public UInterface {
    GENERATED_BODY()
};

class ISP3_DamageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool IsDead() const PURE_VIRTUAL(IsDead, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetHealthMax() const PURE_VIRTUAL(GetHealthMax, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetHealth() const PURE_VIRTUAL(GetHealth, return 0.0f;);
    
};

