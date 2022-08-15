

#pragma once

#include "CoreMinimal.h"
#include "FalconMovementCoordinator.h"
#include "Tasks/AITask.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "Math/Vector.h"
#include "FalconAIMovementCoordinator.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class PHASMID_API UFalconAIMovementCoordinator : public UFalconMovementCoordinator
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverridePhysBlend;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDebug_EnableNewSplineMovement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReachTestIncludesAgentRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStopAtClosestPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideOrientToMovement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SeekAcceptRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDebug_DrawSeekBehavior;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FleeCheckRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FleeCheckHalfAngle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FleeDebounceTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDontStopFleeing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WanderBFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WanderMinTurnTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WanderMaxTurnTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WanderMinStraightTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WanderMaxStraightTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WanderReturnStrScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WanderReturnStrExp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWanderTriggerMoveDone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDebug_DrawWanderBehvior;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUsePathfindingToSpline;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSetEventStartKeyOnFollowEvent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAITask* CurrentMoveTask;
	

	UFUNCTION(BlueprintCallable)
	void LaunchLandCompleted(const FHitResult& Hit);
	UFUNCTION(BlueprintCallable)
	void LaunchCompleted(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
};
