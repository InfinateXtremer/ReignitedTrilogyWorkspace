#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/InterpToMovementComponent.h"
#include "Interfaces/NetworkPredictionInterface.h"
#include "PhasmidInterpToMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhasmidInterpToMovementComponent : public UInterpToMovementComponent, public INetworkPredictionInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReachedControlPointDelegate, int32, ControlPointIndex, float, Precentage);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReachedControlPointDelegate OnReachedControlPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoMovement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushObstacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedSplineTime, meta=(AllowPrivateAccess=true))
    float ReplicatedSplineTime;
    
public:
    UPhasmidInterpToMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryPushObstacle(const FHitResult& Hit, float Time, FVector MoveDelta);
    
public:
    UFUNCTION(BlueprintCallable)
    void SyncCurrentTime(float ServerTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedSplineTime();
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetLastVelocity();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentTime();
    
    
    // Fix for true pure virtual functions not being implemented
};

