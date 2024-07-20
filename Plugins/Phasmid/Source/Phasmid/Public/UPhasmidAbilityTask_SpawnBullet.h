#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "PhasmidSpawnActorDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "UPhasmidAbilityTask_SpawnBullet.generated.h"

class AActor;
class UGameplayAbility;
class UUPhasmidAbilityTask_SpawnBullet;

UCLASS(Blueprintable, MinimalAPI)
class UUPhasmidAbilityTask_SpawnBullet : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidSpawnActorDelegate Success;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidSpawnActorDelegate DidNotSpawn;
    
    UUPhasmidAbilityTask_SpawnBullet();
    UFUNCTION(BlueprintCallable)
    static UUPhasmidAbilityTask_SpawnBullet* SpawnProjectileFromTarget(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<AActor> Class);
    
    UFUNCTION(BlueprintCallable)
    static UUPhasmidAbilityTask_SpawnBullet* SpawnProjectile(UGameplayAbility* OwningAbility, const FTransform& Transform, TSubclassOf<AActor> Class);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    bool BeginSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<AActor> Class, AActor*& SpawnedActor);
    
};

