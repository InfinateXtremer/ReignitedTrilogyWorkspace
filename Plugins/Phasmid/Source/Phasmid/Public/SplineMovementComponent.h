

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "SplineEnums.h"
#include "SplineMovementComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSplineMovementComponentOnFinished);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable, BlueprintType)
class PHASMID_API USplineMovementComponent : public UMovementComponent
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(BlueprintAssignable)
	FSplineMovementComponentOnFinished OnFinished;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStartAtClosestPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESplineSnapType SnapToSpline;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRotateWithSpline;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSweepOnMove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bClampTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* InitialSplineActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFollowSplineType FollowType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OverrideSplineTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* SplineTimeCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform TransformOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSyncToWorldTime;
	
};
