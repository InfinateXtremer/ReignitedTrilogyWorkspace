#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/MovementComponent.h"
#include "EFollowSplineType.h"
#include "ESplineSnapType.h"
#include "OnSplineEventDelegate.h"
#include "SplineMovementComponent.generated.h"

class AActor;
class UCurveFloat;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API USplineMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSplineEvent OnFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartAtClosestPoint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineSnapType SnapToSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateWithSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSweepOnMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InitialSplineActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFollowSplineType FollowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideSplineTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SplineTimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TransformOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncToWorldTime;
    
public:
    USplineMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetSplineTime(float Time, bool bNewMove);
    
    UFUNCTION(BlueprintCallable)
    bool SetFollowSplineByName(AActor* SplineHolder, const FName& SplineName);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowSpline(USplineComponent* Spline);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_FollowSplineWithParams(USplineComponent* Spline, bool bReverseSpline, bool bLooping, bool bStartAtNearestWaypoint, float TimeOffset);
    
};

