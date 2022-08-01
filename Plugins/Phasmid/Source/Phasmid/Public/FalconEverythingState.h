

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/UserDefinedStruct.h"
#include "EFalconFacingMode.h"
#include "EFalconTargetType.h"
#include "EFalconMovementMode.h"
#include "Particles/Emitter.h"
#include "GameplayTagContainer.h"
#include "PhasmidCollisionStruct.h"
#include "PhasmidProjectileStruct.h"
#include "LaunchParams.h"
#include "FalconStateEmitterStruct.h"
#include "FalconEnemySpawnedCollectible.h"
#include "FalconEverythingTrigger.h"
#include "FalconMaterialTransitionStruct.h"
#include "FalconSignalData.h"
#include "FalconEverythingState.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFalconEverythingStateStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};


USTRUCT(BlueprintType)
struct FFalconEverythingState
{
	GENERATED_USTRUCT_BODY()

public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName stateName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimMontage* Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MontageStartOffsetPercentage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EFalconMovementMode MovementMode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EFalconTargetType MovementTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EFalconFacingMode FacingMode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EFalconTargetType FacingTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<FGameplayTag, FLaunchParams> DamageTypeLaunchParamsOverrides;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FPhasmidCollisionStruct> CollisionRegionSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FPhasmidProjectileStruct> ProjectileSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class AActor* Target;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class ATargetPoint* Waypoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FGameplayTagContainer Immunities;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class AActor> SpawnActorClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FFalconStateEmitterStruct EnterStateEmitter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FFalconStateEmitterStruct ExitStateEmitter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 bResetGlobalTriggers;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 bDestroySelfOnExit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 bDisableCollision;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 bDisableAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FFalconEnemySpawnedCollectible> SpawnCollectibles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FFalconEverythingTrigger> Triggers;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FFalconMaterialTransitionStruct> MaterialParamaterCurves;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 bStartAtNearestWaypoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 bKeepVelocityOnStateChange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FFalconSignalData Signal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float WanderDelay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float WanderOuterRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float WanderTurnRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ActorTickIntervalOverride;
};