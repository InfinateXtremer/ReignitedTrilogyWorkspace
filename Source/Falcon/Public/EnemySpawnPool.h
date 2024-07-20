#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ESpawnOrder.h"
#include "ESpawnPointPolicy.h"
#include "SpawnDestination.h"
#include "SpawnOutlets.h"
#include "SpawnTemplateList.h"
#include "Templates/SubclassOf.h"
#include "EnemySpawnPool.generated.h"

class ACharacter;
class ATargetPoint;
class UAnimMontage;
class UBillboardComponent;
class UFalconEnemyStateComponent;
class UQuestTask;

UCLASS(Blueprintable)
class FALCON_API AEnemySpawnPool : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATargetPoint*> SeedPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnTemplateList SpawnTemplates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnPointPolicy SelectionPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConcurrentSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConcurrentOutletLimiter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreMaxSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTotalSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnOffscreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSlowSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivateRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenSpawns;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference DefaultLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnDestination DestinationDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnDestination> DestinationsExclusive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DefaultMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnOutlets SpawnOutlets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod SpawnCollisionMethod;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* EditorSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestTask* m_slowSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ACharacter>> SpawnCharacters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnOrder SpawnOrderPolicy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> ExclusiveDestinations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference DefaultDestination;
    
public:
    AEnemySpawnPool();
    UFUNCTION(BlueprintCallable)
    void ShutdownSpawner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExhaustedSpawner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEnemySpawned(AActor* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEnemyDefeated(AActor* Enemy);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSP3DeathStart(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnSP3DeathEnd(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroy(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnDeathState(AActor* Actor, UFalconEnemyStateComponent* StateComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyAllEnemies();
    
};

