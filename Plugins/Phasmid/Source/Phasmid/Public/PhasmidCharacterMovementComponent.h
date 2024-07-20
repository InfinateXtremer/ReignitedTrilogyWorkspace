#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EPhasmidSplineTraversalMode.h"
#include "OnStuckSplineEventDelegate.h"
#include "PCMEvtSigOnSkateAutoTurboEndEventDelegate.h"
#include "PCMEvtSigOnSkateAutoTurboStartEventDelegate.h"
#include "PCMEvtSigOnSkateEventDelegate.h"
#include "PCMEvtSigOnSkateTurboCancelEventDelegate.h"
#include "PCMEvtSigOnSkateTurboEndEventDelegate.h"
#include "PCMEvtSigOnSkateTurboStartEventDelegate.h"
#include "PhasmidCMSkateTuning.h"
#include "Templates/SubclassOf.h"
#include "PhasmidCharacterMovementComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UPhasmidCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableWallSliding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMoveAnywaysWhenBlocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHorizontalPush: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableJumpCollisions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSlideOffLevelObjects: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanPushOtherPawns: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCannotBePushedByOthers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanTurnAroundInAir: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableLand: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanAlwaysJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableSplineMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPreciseFloorCheckingWhileFlying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSplineSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineDistanceAcceptance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhasmidSplineTraversalMode DefaultSplineTraversalMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableCarMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarTurningRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidCMSkateTuning SkateTuning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AttachBoardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CrashBoardClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCMEvtSigOnSkateEvent onSkateEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCMEvtSigOnSkateTurboStartEvent OnSkateTurboStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCMEvtSigOnSkateTurboEndEvent OnSkateTurboEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCMEvtSigOnSkateAutoTurboStartEvent OnSkateAutoTurboStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCMEvtSigOnSkateAutoTurboEndEvent OnSkateAutoTurboEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCMEvtSigOnSkateTurboCancelEvent OnSkateTurboCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStuckSplineEvent OnStuckSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStepUpWhileFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxSpeedSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMaxSpeedSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideBounceRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideClampMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideAwayMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideClampMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlideAwayFromConvexWalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfPushVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfPushZMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfPushDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastPushLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoLandOnInvalid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultJumpTraversalRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultApexHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAnimSpeedInputMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DeltaBasedVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowSteppingOffNavMesh: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLimitSplineVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowTurningOffMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSplineFlying2: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AverageFootNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> IdleFootLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootOffLedgeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleFootMeshYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootTraceDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgePushDistanceRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgePushDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgePushAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgePushDeceleration;
    
public:
    UPhasmidCharacterMovementComponent();
    UFUNCTION(BlueprintCallable)
    bool UpdatePushOffLedge();
    
    UFUNCTION(BlueprintCallable)
    void RestoreSkateTurboState();
    
    UFUNCTION(BlueprintCallable)
    void ResetSkateTurbo();
    
    UFUNCTION(BlueprintCallable)
    void OverrideSkateboardValues(float GroundSpeed, float GroundAccel, float TurboSpeed, float TurboAccel, float MaxTurboPoints, const FVector& BoardSize, const FVector& BoardOffset, float WheelRadius, float RollAngVert, float MaxSpeed, float MaxSpeedWhenTurboAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingAutoSkateTurbo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkateboardTurboEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkateboarding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkateboardCrashing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingingTowardsLedge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingPushedOffLedge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFeetOffGround();
    
    UFUNCTION(BlueprintCallable)
    void GiveSkateTurboPoints(int32 Points);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSkateTurboPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSkateTurboPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkateboardAnimInfo(FName& Name, FVector2D& Input) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementSpeedForAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSkateTurboPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFeetOnGround();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAverageGroundNormal();
    
    UFUNCTION(BlueprintCallable)
    void EnableSkateboardTurbo(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ClearSkateTurboState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckNotOverlapping(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseSkateTurbo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanConsumeSkateTurbo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreFeetOffGround(int32 Feet, int32& FeetOffGround);
    
    UFUNCTION(BlueprintCallable)
    void ActivateAutoSkateTurbo(float Seconds);
    
};

