

#pragma once

#include "CoreMinimal.h"
#include "PhasmidEnemyComponent.h"
#include "FalconEverythingTrigger.h"
#include "LaunchParams.h"
#include "FalconEnemyComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconEnemyComponentOnDeathState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconEnemyComponentOnStateChange);
UCLASS()
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
	
	
};
