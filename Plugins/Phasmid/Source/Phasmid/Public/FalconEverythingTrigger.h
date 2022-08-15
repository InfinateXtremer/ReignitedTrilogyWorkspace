

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "GameplayTagContainer.h"
#include "EFalconTargetType.h"
#include "FalconEverythingTrigger.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFalconEverythingTriggerStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};

USTRUCT(BlueprintType)
struct FFalconEverythingTrigger
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NextStateName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bChooseRandomNextState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> RandomNextState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TriggerType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLogicalAndTrigger;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Time;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Distance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFalconTargetType DistanceTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer ReceiveDamageTypes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> ReceiveDamageComponents;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CausedDamageTargetType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag WatchedActorTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bWatchSpawns;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWatchCollectibles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 WatchListCompareValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> CollisionVolume;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFalconTargetType CollisionVolumeTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFalconTargetType SightTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HitPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer TriggerSignals;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SplinePointIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReachedSplineIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bConsumeSignals;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bDontResetTrigger;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bAdjustForActorTimeDilation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bRestrictVerticalDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceAboveGround;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceBelowGround;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> BlueprintFunctionNames;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> StateNames;

};