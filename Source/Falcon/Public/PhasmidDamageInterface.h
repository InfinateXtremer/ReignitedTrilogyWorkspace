

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "UObject/Interface.h"
#include "PhasmidDamageInterface.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UPhasmidDamageInterface : public UInterface
{
	GENERATED_BODY()
};


class FALCON_API IPhasmidDamageInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PhasmidDamageInterface")
	bool OnShieldBreak(const struct FGameplayEventData& Payload);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PhasmidDamageInterface")
	bool OnHealthRestored(const struct FGameplayEventData& Payload);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PhasmidDamageInterface")
	bool OnDeath(const struct FGameplayEventData& Payload);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PhasmidDamageInterface")
	bool OnDealDamage(const struct FGameplayEventData& Payload);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PhasmidDamageInterface")
	bool OnDamage(const struct FGameplayEventData& Payload);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PhasmidDamageInterface")
	void IsImmuneToDamage();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PhasmidDamageInterface")
	bool IsDead();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PhasmidDamageInterface")
	bool IsChargeTarget();
};