#include "UPhasmidAbilityTask_SpawnBullet.h"
#include "Templates/SubclassOf.h"

class AActor;
class UGameplayAbility;
class UUPhasmidAbilityTask_SpawnBullet;

UUPhasmidAbilityTask_SpawnBullet* UUPhasmidAbilityTask_SpawnBullet::SpawnProjectileFromTarget(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<AActor> Class) {
    return NULL;
}

UUPhasmidAbilityTask_SpawnBullet* UUPhasmidAbilityTask_SpawnBullet::SpawnProjectile(UGameplayAbility* OwningAbility, const FTransform& Transform, TSubclassOf<AActor> Class) {
    return NULL;
}

void UUPhasmidAbilityTask_SpawnBullet::FinishSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, AActor* SpawnedActor) {
}

bool UUPhasmidAbilityTask_SpawnBullet::BeginSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<AActor> Class, AActor*& SpawnedActor) {
    return false;
}

UUPhasmidAbilityTask_SpawnBullet::UUPhasmidAbilityTask_SpawnBullet() {
}

