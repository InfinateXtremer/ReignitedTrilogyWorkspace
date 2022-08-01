

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
	uint8 bChooseRandomNextState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> RandomNextState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TriggerType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bLogicalAndTrigger;
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
	int bWatchSpawns;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int bWatchCollectibles;
	uint32 WatchListCompareValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> CollisionVolume;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFalconTargetType CollisionVolumeTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFalconTargetType SightTarget;
	uint32 HitPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer TriggerSignals;
	uint32 SplinePointIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bReachedSplineIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bConsumeSignals;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bDontResetTrigger;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bAdjustForActorTimeDilation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bRestrictVerticalDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceAboveGround;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceBelowGround;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> BlueprintFunctionNames;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> StateNames;

};