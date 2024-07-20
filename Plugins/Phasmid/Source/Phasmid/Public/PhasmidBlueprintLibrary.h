#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayEffectTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PhasmidCollisionStruct.h"
#include "PhasmidEffectApplicationContainer.h"
#include "PhasmidProjectileStruct.h"
#include "PhasmidTargetDataFilterByCollisionTags.h"
#include "PhasmidTargetDataFilterByTeam.h"
#include "Templates/SubclassOf.h"
#include "PhasmidBlueprintLibrary.generated.h"

class AActor;
class APawn;
class APhasmidCollisionRegion;
class APhasmidProjectileActor;
class APlayerStart;
class UGameplayEffect;
class UObject;

UCLASS(Blueprintable)
class PHASMID_API UPhasmidBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPhasmidBlueprintLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APhasmidProjectileActor* SpawnProjectileActor(const UObject* WorldContextObject, const FTransform& Transform, AActor* Owner, APawn* Instigator, const FPhasmidProjectileStruct& ProjectileData, bool bSpawnWithCollisionDisabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APhasmidCollisionRegion* SpawnCollisionRegion(const UObject* WorldContextObject, AActor* Owner, APawn* Instigator, const FPhasmidCollisionStruct& CollisionData, bool bSpawnWithCollisionDisabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetCullComponentsEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseRegion(APhasmidCollisionRegion* Region);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseProjectile(APhasmidProjectileActor* Projectile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTargetDataFilterHandle MakeTeamFilterHandle(FPhasmidTargetDataFilterByTeam Filter, AActor* FilterActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTargetDataFilterHandle MakeCollisionTagFilterHandle(FPhasmidTargetDataFilterByCollisionTags Filter, AActor* FilterActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FHitResult> GetTargetsInRadius(const UObject* WorldContextObject, const FVector& Origin, float Radius, const TArray<AActor*>& IgnoreActors, AActor* TargetingActor, TEnumAsByte<ECollisionChannel> TraceBlockChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSourceStringFromLocalizedText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetServerWorldTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APlayerStart* GetPlayerStart(UObject* WorldContextObject, const FString& PlayerStartName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetDamagePreventedTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetDamagePreventedByGroupTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetDamagePreventByInvulnerabilityTag();
    
    UFUNCTION(BlueprintCallable)
    static void GenerateEffectSpecs(UPARAM(Ref) FPhasmidEffectApplicationContainer& Container, AActor* Source, float LevelOverride, int32 StackOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DamageWasPrevented(const FGameplayEventData& Payload, FGameplayTagContainer& PreventedTags);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FActiveGameplayEffectHandle> ApplyEffectApplicationContainerToTarget(UPARAM(Ref) FPhasmidEffectApplicationContainer& Container, AActor* Target);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FActiveGameplayEffectHandle ApplyDamageGroupEffect(const UObject* WorldContextObject, float DamageMagnitude, TSubclassOf<UGameplayEffect> DamageEffectClass, AActor* Instigator, AActor* DamageCauser, AActor* DamageTarget, FGameplayTagContainer DamageTags, FName DamageGroupName, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FActiveGameplayEffectHandle ApplyDamageEffect(const UObject* WorldContextObject, float DamageMagnitude, TSubclassOf<UGameplayEffect> DamageEffectClass, AActor* Instigator, AActor* DamageCauser, AActor* DamageTarget, FGameplayTagContainer DamageTags, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    static void AddHitResult(UPARAM(Ref) FPhasmidEffectApplicationContainer& Container, FHitResult HitResult);
    
};

