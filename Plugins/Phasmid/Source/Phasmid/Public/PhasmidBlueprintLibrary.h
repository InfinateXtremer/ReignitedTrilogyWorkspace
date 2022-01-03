

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PhasmidBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void SpawnProjectileActor(class UObject* WorldContextObject, const struct FTransform& Transform, class AActor* Owner, class APawn* Instigator);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void SpawnCollisionRegion(class UObject* WorldContextObject, class AActor* Owner, class APawn* Instigator);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void SetCullComponentsEnabled(bool bEnabled);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void ReleaseRegion();
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void ReleaseProjectile(class AActor* Projectile); //Needs to be replaced with APhasmidProjectileActor
	
	//UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	//static void MakeTeamFilterHandle(const struct FPhasmidTargetDataFilterByTeam& Filter);
	
	//UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	//static void MakeCollisionTagFilterHandle(const struct FPhasmidTargetDataFilterByCollisionTags& Filter);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void GetTargetsInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static FString GetSourceStringFromLocalizedText(const FText& InText);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static float GetServerWorldTime(class UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void GetPlayerStart(class UObject* WorldContextObject);
	
	//UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	//static struct FGameplayTag GetDamagePreventedTag();
	
	//UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	//static struct FGameplayTag GetDamagePreventedByGroupTag();
	
	//UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	//static struct FGameplayTag GetDamagePreventByInvulnerabilityTag();
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void GenerateEffectSpecs();
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void DamageWasPrevented(const struct FGameplayEventData& Payload);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void ApplyEffectApplicationContainerToTarget();
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void ApplyDamageGroupEffect(class UObject* WorldContextObject);
	
	//Function Phasmid.PhasmidBlueprintLibrary.ApplyDamageEffect
	//StructProperty Phasmid.PhasmidBlueprintLibrary.ApplyDamageEffect.ReturnValue
	//StructProperty Phasmid.PhasmidBlueprintLibrary.ApplyDamageEffect.Hit
	//StructProperty Phasmid.PhasmidBlueprintLibrary.ApplyDamageEffect.DamageTags
	//ObjectProperty Phasmid.PhasmidBlueprintLibrary.ApplyDamageEffect.DamageTarget
	//ObjectProperty Phasmid.PhasmidBlueprintLibrary.ApplyDamageEffect.DamageCauser
	//ObjectProperty Phasmid.PhasmidBlueprintLibrary.ApplyDamageEffect.Instigator
	//ClassProperty Phasmid.PhasmidBlueprintLibrary.ApplyDamageEffect.DamageEffectClass
	//FloatProperty Phasmid.PhasmidBlueprintLibrary.ApplyDamageEffect.DamageMagnitude
	//ObjectProperty Phasmid.PhasmidBlueprintLibrary.ApplyDamageEffect.WorldContextObject
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void ApplyDamageEffect(class UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	static void AddHitResult();
	
	
};
