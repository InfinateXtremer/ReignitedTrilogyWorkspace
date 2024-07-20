#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PhasmidDamageEffectInterface.generated.h"

class UAbilitySystemComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UPhasmidDamageEffectInterface : public UInterface {
    GENERATED_BODY()
};

class IPhasmidDamageEffectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAbilitySystemComponent* GetEffectSourceASC();
    
};

