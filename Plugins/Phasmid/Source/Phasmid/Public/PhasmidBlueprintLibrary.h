

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "PhasmidGameplayStructs.h"
#include "PhasmidProjectileStruct.h"
#include "PhasmidProjectileActor.h"
#include "PhasmidBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	class APhasmidCollisionRegion* SpawnCollisionRegion(const class UObject* WorldContextObject, class AActor* Owner, class APawn* Instigator, const FPhasmidCollisionStruct& CollisionData, bool bSpawnWithCollisionDisabled);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	void SetCullComponentsEnabled(bool bEnabled);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	void ReleaseRegion(class APhasmidCollisionRegion* Region);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	void ReleaseProjectile(class APhasmidProjectileActor* Projectile);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	FGameplayTargetDataFilterHandle MakeTeamFilterHandle(FPhasmidTargetDataFilterByTeam Filter, class AActor* FilterActor);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	FGameplayTargetDataFilterHandle MakeCollisionTagFilterHandle(FPhasmidTargetDataFilterByCollisionTags Filter, class AActor* FilterActor);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	TArray<FHitResult> GetTargetsInRadius(const class UObject* WorldContextObject, const FVector& Origin, float Radius, const TArray<class AActor*>& IgnoreActors, class AActor* TargetingActor, TEnumAsByte<ECollisionChannel> TraceBlockChannel);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	FString GetSourceStringFromLocalizedText(const FText& InText);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	float GetServerWorldTime(const class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	class APlayerStart* GetPlayerStart(class UObject* WorldContextObject, FString PlayerStartName);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	FGameplayTag GetDamagePreventedTag();
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	FGameplayTag GetDamagePreventedByGroupTag();
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	FGameplayTag GetDamagePreventByInvulnerabilityTag();
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	void GenerateEffectSpecs(FPhasmidEffectApplicationContainer& Container, class AActor* Source, float LevelOverride, int32 StackOverride);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	bool DamageWasPrevented(const FGameplayEventData& Payload, FGameplayTagContainer& PreventedTags);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	TArray<FActiveGameplayEffectHandle> ApplyEffectApplicationContainerToTarget(FPhasmidEffectApplicationContainer& Container, class AActor* Target);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	FActiveGameplayEffectHandle ApplyDamageGroupEffect(const class UObject* WorldContextObject, float DamageMagnitude, TSubclassOf<class UGameplayEffect> DamageEffectClass, class AActor* Instigator, class AActor* DamageCauser, class AActor* DamageTarget, FGameplayTagContainer DamageTags, FName DamageGroupName, const FHitResult& Hit);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	FActiveGameplayEffectHandle ApplyDamageEffect(const class UObject* WorldContextObject, float DamageMagnitude, TSubclassOf<class UGameplayEffect> DamageEffectClass, class AActor* Instigator, class AActor* DamageCauser, class AActor* DamageTarget, FGameplayTagContainer DamageTags, const FHitResult& Hit);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
	void AddHitResult(FPhasmidEffectApplicationContainer& Container, FHitResult HitResult);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject"))
		class APhasmidProjectileActor* SpawnProjectileActor(const class UObject* WorldContextObject, const FTransform& Transform, class AActor* Owner, class APawn* Instigator, const FPhasmidProjectileStruct& ProjectileData, bool bSpawnWithCollisionDisabled);

};
