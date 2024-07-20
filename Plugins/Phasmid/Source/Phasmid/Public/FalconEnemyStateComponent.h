#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FalconEverythingState.h"
#include "FalconProjectileSpawnedDelegate.h"
#include "FalconStateSpawnedActorDelegate.h"
#include "PhasmidInventorySpawnerInterface.h"
#include "StateChangeSignatureDelegate.h"
#include "StateExitSignatureDelegate.h"
#include "FalconEnemyStateComponent.generated.h"

class AActor;
class ATargetPoint;
class UFalconEnemyStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UFalconEnemyStateComponent : public UActorComponent //, public IPhasmidInventorySpawnerInterface 
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconEverythingState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconStateSpawnedActor OnActorSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconStateSpawnedActor OnCollectibleSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateChangeSignature OnEnterStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateExitSignature OnExitStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconProjectileSpawned OnProjectileSpawned;
    
    UFalconEnemyStateComponent();
    UFUNCTION(BlueprintCallable)
    bool WillSpawnCollectibleOfType(UClass* Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStateName();
    
    UFUNCTION(BlueprintCallable)
    void BP_UpdateWanderParams(float Delay, float OuterRadius, float TurnRate);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetWaypoints(ATargetPoint* Points);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnExitState(UFalconEnemyStateComponent* NextState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEnterState();
    
    UFUNCTION(BlueprintCallable)
    void BP_AddActorToWatchListByIndex(int32 Index, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddActorToWatchList(FName NextStateName, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllLootCollected();
    
    
    // Fix for true pure virtual functions not being implemented
};

