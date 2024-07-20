#include "PhasmidBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class AActor;
class APawn;
class APhasmidCollisionRegion;
class APhasmidProjectileActor;
class APlayerStart;
class UGameplayEffect;
class UObject;

APhasmidProjectileActor* UPhasmidBlueprintLibrary::SpawnProjectileActor(const UObject* WorldContextObject, const FTransform& Transform, AActor* Owner, APawn* Instigator, const FPhasmidProjectileStruct& ProjectileData, bool bSpawnWithCollisionDisabled) {
    return NULL;
}

APhasmidCollisionRegion* UPhasmidBlueprintLibrary::SpawnCollisionRegion(const UObject* WorldContextObject, AActor* Owner, APawn* Instigator, const FPhasmidCollisionStruct& CollisionData, bool bSpawnWithCollisionDisabled) {
    return NULL;
}

void UPhasmidBlueprintLibrary::SetCullComponentsEnabled(bool bEnabled) {
}

void UPhasmidBlueprintLibrary::ReleaseRegion(APhasmidCollisionRegion* Region) {
}

void UPhasmidBlueprintLibrary::ReleaseProjectile(APhasmidProjectileActor* Projectile) {
}

FGameplayTargetDataFilterHandle UPhasmidBlueprintLibrary::MakeTeamFilterHandle(FPhasmidTargetDataFilterByTeam Filter, AActor* FilterActor) {
    return FGameplayTargetDataFilterHandle{};
}

FGameplayTargetDataFilterHandle UPhasmidBlueprintLibrary::MakeCollisionTagFilterHandle(FPhasmidTargetDataFilterByCollisionTags Filter, AActor* FilterActor) {
    return FGameplayTargetDataFilterHandle{};
}

TArray<FHitResult> UPhasmidBlueprintLibrary::GetTargetsInRadius(const UObject* WorldContextObject, const FVector& Origin, float Radius, const TArray<AActor*>& IgnoreActors, AActor* TargetingActor, TEnumAsByte<ECollisionChannel> TraceBlockChannel) {
    return TArray<FHitResult>();
}

FString UPhasmidBlueprintLibrary::GetSourceStringFromLocalizedText(const FText& InText) {
    return TEXT("");
}

float UPhasmidBlueprintLibrary::GetServerWorldTime(const UObject* WorldContextObject) {
    return 0.0f;
}

APlayerStart* UPhasmidBlueprintLibrary::GetPlayerStart(UObject* WorldContextObject, const FString& PlayerStartName) {
    return NULL;
}

FGameplayTag UPhasmidBlueprintLibrary::GetDamagePreventedTag() {
    return FGameplayTag{};
}

FGameplayTag UPhasmidBlueprintLibrary::GetDamagePreventedByGroupTag() {
    return FGameplayTag{};
}

FGameplayTag UPhasmidBlueprintLibrary::GetDamagePreventByInvulnerabilityTag() {
    return FGameplayTag{};
}

void UPhasmidBlueprintLibrary::GenerateEffectSpecs(FPhasmidEffectApplicationContainer& Container, AActor* Source, float LevelOverride, int32 StackOverride) {
}

bool UPhasmidBlueprintLibrary::DamageWasPrevented(const FGameplayEventData& Payload, FGameplayTagContainer& PreventedTags) {
    return false;
}

TArray<FActiveGameplayEffectHandle> UPhasmidBlueprintLibrary::ApplyEffectApplicationContainerToTarget(FPhasmidEffectApplicationContainer& Container, AActor* Target) {
    return TArray<FActiveGameplayEffectHandle>();
}

FActiveGameplayEffectHandle UPhasmidBlueprintLibrary::ApplyDamageGroupEffect(const UObject* WorldContextObject, float DamageMagnitude, TSubclassOf<UGameplayEffect> DamageEffectClass, AActor* Instigator, AActor* DamageCauser, AActor* DamageTarget, FGameplayTagContainer DamageTags, FName DamageGroupName, const FHitResult& Hit) {
    return FActiveGameplayEffectHandle{};
}

FActiveGameplayEffectHandle UPhasmidBlueprintLibrary::ApplyDamageEffect(const UObject* WorldContextObject, float DamageMagnitude, TSubclassOf<UGameplayEffect> DamageEffectClass, AActor* Instigator, AActor* DamageCauser, AActor* DamageTarget, FGameplayTagContainer DamageTags, const FHitResult& Hit) {
    return FActiveGameplayEffectHandle{};
}

void UPhasmidBlueprintLibrary::AddHitResult(FPhasmidEffectApplicationContainer& Container, FHitResult HitResult) {
}

UPhasmidBlueprintLibrary::UPhasmidBlueprintLibrary() {
}

