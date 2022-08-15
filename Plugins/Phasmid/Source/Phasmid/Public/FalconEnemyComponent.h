

#pragma once

#include "CoreMinimal.h"
#include "PhasmidEnemyComponent.h"
#include "FalconEverythingTrigger.h"
#include "LaunchParams.h"
#include "EnemyDebugDrawOverrideType.h"
#include "FalconStateEmitterStruct.h"
#include "PhasmidObjectSaveStruct.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "FalconEnemyComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconEnemyComponentOnDeathState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconEnemyComponentOnStateChange);
UCLASS(meta = (BlueprintSpawnableComponent))
class PHASMID_API UFalconEnemyComponent : public UPhasmidEnemyComponent
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName InitalStateName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FFalconEverythingTrigger> GlobalTriggers;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer GlobalImmunities;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUpdateOnEnter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MoveDoneRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MoveDoneHalfAngle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bChangeMovementToWalkingAfterLaunch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBroadcastSignalOnPlayerHurt;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableStateMachineLogic;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDrawTriggerDistances;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDebugDrawCurrentState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDebugDrawSightRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDebugDrawDistanceToPlayer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDebugReviewStateMachine;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDebugDisplayStateMachineReviewToScreen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SightRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SightHalfAngle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OnScreenPercentage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HitPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bVisibleAfterDeath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMuteDuringCutscenes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnoreCutsceneMode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDisplaceGrass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStopPlayingMontagesOnEnter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowTriggersToChangeWhileInTheAir;

	UPROPERTY(BlueprintAssignable)
	FFalconEnemyComponentOnDeathState OnDeathState;
	UPROPERTY(BlueprintAssignable)
	FFalconEnemyComponentOnStateChange OnStateChange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowFlamedEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsMetal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BlendBelowBone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIncludeBlendBelowBone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FGameplayTag, FLaunchParams> DamageTypeLaunchParams;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLaunchParams DefaultLaunchParams;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ZeroTickIntervalDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UFalconEnemyStateComponent* CurrentState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UFalconEnemyStateComponent* BlueprintNextState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* Emitter;
	
	UFUNCTION(BlueprintCallable)
	bool WillSpawnCollectibleOfType(UClass* Class);
	UFUNCTION(BlueprintCallable)
	class UParticleSystemComponent* SpawnEmitter(FFalconStateEmitterStruct EmitterData);
	UFUNCTION(BlueprintCallable)
	void SetDebugDrawCurrentStateOverrideState(EEnemyDebugDrawOverrideType overrideType);
	UFUNCTION(BlueprintCallable)
	void SetDead();
	UFUNCTION(BlueprintCallable)
	void ResetStateMachine();
	UFUNCTION(BlueprintCallable)
	void RemoveImmunity(FGameplayTagContainer ImmunityTags);
	UFUNCTION(BlueprintCallable)
	void OnTakeDamage(class AActor* Actor, const FGameplayEventData Payload);
	UFUNCTION(BlueprintCallable)
	void OnReceiveHit(float Magnitude, FGameplayTagContainer DamageTags, const FHitResult& Hit, const class AActor* HitInstigator);
	UFUNCTION(BlueprintCallable)
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION(BlueprintCallable)
	void OnDealDamage(class AActor* Actor, const FGameplayEventData Payload);
	UFUNCTION(BlueprintCallable)
	void OnCollisionVolumeExit(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	UFUNCTION(BlueprintCallable)
	void OnCollisionVolumeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable)
	void OnCollectibleSpawnedByState(class UFalconEnemyStateComponent* State, class AActor* Actor);
	UFUNCTION(BlueprintCallable)
	TArray<class UMaterialInstanceDynamic*> GetMetalMaterials();
	UFUNCTION(BlueprintCallable)
	FHitResult GetLastHitResult();
	UFUNCTION(BlueprintCallable)
	class AActor* GetLastHitInstigator();
	UFUNCTION(BlueprintCallable)
	bool GetIsMetal();
	UFUNCTION(BlueprintCallable)
	EEnemyDebugDrawOverrideType GetDebugDrawCurrentStateOverrideState();
	UFUNCTION(BlueprintCallable)
	float GetCurrentStateTime();
	UFUNCTION(BlueprintCallable)
	bool CanBeDamagedByHit(const FGameplayTagContainer& DamageTypes, class UPrimitiveComponent* HitComponent);
	UFUNCTION(BlueprintCallable)
	bool CanBeCharged();
	UFUNCTION(BlueprintCallable)
	void BP_RestoreSaveData(const FPhasmidObjectSaveDataList& saveData);
	UFUNCTION(BlueprintCallable)
	bool BP_IsDead(class AActor* Enemy);
	UFUNCTION(BlueprintCallable)
	FGameplayTagContainer BP_GetLastDamageTypesTaken(class UObject* Enemy);
	UFUNCTION(BlueprintCallable)
	FName BP_GetCurrentStateName();
	UFUNCTION(BlueprintCallable)
	void BP_ForcePoseUpdate();
	UFUNCTION(BlueprintCallable)
	void BP_ClearLastDamageTypesTaken(class UObject* Enemy);
	UFUNCTION(BlueprintCallable)
	bool BP_ChangeState_StateComponent(class UFalconEnemyStateComponent* StateComponent, bool bForceImmediate);
	UFUNCTION(BlueprintCallable)
	bool BP_ChangeState(FName stateName);
	UFUNCTION(BlueprintCallable)
	void BP_AddSaveData(FPhasmidObjectSaveDataList& saveData);
	UFUNCTION(BlueprintCallable)
	void BP_AddActorToWatchListByIndex(int32 Index, class AActor* Actor);
	UFUNCTION(BlueprintCallable)
	void BP_AddActorToWatchList(FName NextStateName, class AActor* Actor);
	UFUNCTION(BlueprintCallable)
	bool AllLootCollected();
	UFUNCTION(BlueprintCallable)
	void AddImmunity(const FGameplayTagContainer& ImmunityTags);
};
