#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "OnSpawnManagerRegisterDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "SP3_SpawnManagerComponent.generated.h"

class AActor;
class ASP3_BossPickupBase;
class UFalconEnemyStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USP3_SpawnManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnManagerRegisterDelegate OnActorRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnManagerRegisterDelegate OnActorUnregistered;
    
    USP3_SpawnManagerComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnInstance(TSubclassOf<AActor> ActorClass, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimeSinceLastSpawn();
    
    UFUNCTION(BlueprintCallable)
    void RegisterActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void PurgeDeadActors();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemyComponentDeathState(AActor* Actor, UFalconEnemyStateComponent* StateComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDied(AActor* Actor, const FGameplayEventData Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void KillSpawnedActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastSpawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSpawnedActors(TSubclassOf<AActor> ActorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSpawnedActors(TSubclassOf<AActor> ActorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASP3_BossPickupBase* GetClosestSpawnedBossPickup(const FVector& Position, TSubclassOf<ASP3_BossPickupBase> ActorClass, float MaxRange) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetClosestSpawnedActor(const FVector& Position, TSubclassOf<AActor> ActorClass, float MaxRange) const;
    
};

