

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "PhasmidDamageInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UPhasmidDamageInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PHASMID_API IPhasmidDamageInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		bool OnShieldBreak(const FGameplayEventData Payload);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		bool OnHealthRestored(const FGameplayEventData Payload);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		bool OnDeath(const FGameplayEventData Payload);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		bool OnDealDamage(const FGameplayEventData Payload);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		bool OnDamage(const FGameplayEventData Payload);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		bool IsImmuneToDamage(const FGameplayTagContainer& InTagContainer, class UPrimitiveComponent* HitComponent);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		bool IsDead();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		bool IsChargeTarget();
	
};
