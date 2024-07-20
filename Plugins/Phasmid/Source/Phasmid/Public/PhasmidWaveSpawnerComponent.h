#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPhasmidWaveSpawnerCommand.h"
#include "EPhasmidWaveSpawnerState.h"
#include "PhasmidEnemyObserverInterface.h"
#include "PhasmidReinforcementsSpawnedDelegate.h"
#include "PhasmidWaveData.h"
#include "PhasmidWaveSpawnedDelegate.h"
#include "PhasmidWaveSpawnerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhasmidWaveSpawnerComponent : public UActorComponent //, public IPhasmidEnemyObserverInterface 
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidWaveData> Waves;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidWaveSpawned OnWaveSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidReinforcementsSpawned OnReinforcementSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLoopSpawner: 1;
    
    UPhasmidWaveSpawnerComponent();
    UFUNCTION(BlueprintCallable)
    void StopSpawner();
    
    UFUNCTION(BlueprintCallable)
    void StartSpawner();
    
    UFUNCTION(BlueprintCallable)
    void PauseSpawner();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetCurrentWaveActors();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSpawnerCommand(EPhasmidWaveSpawnerCommand Command);
    
    UFUNCTION(BlueprintCallable)
    void EndCurrentWave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CurrentWaveIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPhasmidWaveSpawnerState CurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void AddActorsToSpawnerFast(TArray<AActor*> Actors);
    
    UFUNCTION(BlueprintCallable)
    void AddActorsToSpawner(TArray<AActor*> Actors);
    
    
    // Fix for true pure virtual functions not being implemented
};

