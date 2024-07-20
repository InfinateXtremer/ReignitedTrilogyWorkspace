#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "PhasmidDamageInterface.generated.h"

class UPrimitiveComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UPhasmidDamageInterface : public UInterface {
    GENERATED_BODY()
};

class IPhasmidDamageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnShieldBreak(const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnHealthRestored(const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnDeath(const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnDealDamage(const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnDamage(const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsImmuneToDamage(const FGameplayTagContainer& InTagContainer, UPrimitiveComponent* HitComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsChargeTarget() const;
    
};

