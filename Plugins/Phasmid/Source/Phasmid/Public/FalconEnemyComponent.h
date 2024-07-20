#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "EEnemyDebugDrawOverrideType.h"
#include "FalconEverythingTrigger.h"
#include "FalconSignalsInterface.h"
#include "FalconStateEmitterStruct.h"
#include "LaunchParams.h"
#include "OnStateChangeSignatureDelegate.h"
#include "PhasmidEnemyComponent.h"
#include "PhasmidObjectSaveDataList.h"
#include "FalconEnemyComponent.generated.h"

class AActor;
class UAnimMontage;
class UFalconEnemyStateComponent;
class UMaterialInstanceDynamic;
class UObject;
class UParticleSystemComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UFalconEnemyComponent : public UPhasmidEnemyComponent //, public IFalconSignalsInterface 
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitalStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFalconEverythingTrigger> GlobalTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GlobalImmunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateOnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveDoneRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveDoneHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bChangeMovementToWalkingAfterLaunch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBroadcastSignalOnPlayerHurt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bEnableStateMachineLogic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawTriggerDistances: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugDrawCurrentState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugDrawSightRadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugDrawDistanceToPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugReviewStateMachine: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugDisplayStateMachineReviewToScreen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnScreenPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleAfterDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMuteDuringCutscenes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreCutsceneMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplaceGrass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopPlayingMontagesOnEnter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTriggersToChangeWhileInTheAir;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChangeSignature OnDeathState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChangeSignature OnStateChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowFlamedEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsMetal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlendBelowBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeBlendBelowBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FLaunchParams> DamageTypeLaunchParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaunchParams DefaultLaunchParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZeroTickIntervalDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFalconEnemyStateComponent* CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFalconEnemyStateComponent* BlueprintNextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Emitter;
    
public:
    UFalconEnemyComponent();
    UFUNCTION(BlueprintCallable)
    bool WillSpawnCollectibleOfType(UClass* Class);
    
private:
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* SpawnEmitter(FFalconStateEmitterStruct EmitterData);
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetDebugDrawCurrentStateOverrideState(EEnemyDebugDrawOverrideType overrideType);
    
    UFUNCTION(BlueprintCallable)
    void SetDead();
    
    UFUNCTION(BlueprintCallable)
    void ResetStateMachine();
    
    UFUNCTION(BlueprintCallable)
    void RemoveImmunity(FGameplayTagContainer ImmunityTags);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(AActor* Actor, const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveHit(float Magnitude, FGameplayTagContainer DamageTags, const FHitResult& Hit, const AActor* HitInstigator);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDealDamage(AActor* Actor, const FGameplayEventData Payload);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCollisionVolumeExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCollectibleSpawnedByState(UFalconEnemyStateComponent* State, AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<UMaterialInstanceDynamic*> GetMetalMaterials();
    
    UFUNCTION(BlueprintCallable)
    FHitResult GetLastHitResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLastHitInstigator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMetal() const;
    
    UFUNCTION(BlueprintCallable)
    static EEnemyDebugDrawOverrideType GetDebugDrawCurrentStateOverrideState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentStateTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeDamagedByHit(const FGameplayTagContainer& DamageTypes, UPrimitiveComponent* HitComponent);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeCharged();
    
    UFUNCTION(BlueprintCallable)
    void BP_RestoreSaveData(const FPhasmidObjectSaveDataList& saveData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BP_IsDead(AActor* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer BP_GetLastDamageTypesTaken(UObject* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BP_GetCurrentStateName() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ForcePoseUpdate();
    
    UFUNCTION(BlueprintCallable)
    static void BP_ClearLastDamageTypesTaken(UObject* Enemy);
    
    UFUNCTION(BlueprintCallable)
    bool BP_ChangeState_StateComponent(UFalconEnemyStateComponent* StateComponent, bool bForceImmediate);
    
    UFUNCTION(BlueprintCallable)
    bool BP_ChangeState(FName stateName);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddSaveData(UPARAM(Ref) FPhasmidObjectSaveDataList& saveData);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddActorToWatchListByIndex(int32 Index, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddActorToWatchList(FName NextStateName, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllLootCollected();
    
    UFUNCTION(BlueprintCallable)
    void AddImmunity(const FGameplayTagContainer& ImmunityTags);
    
    
    // Fix for true pure virtual functions not being implemented
};

