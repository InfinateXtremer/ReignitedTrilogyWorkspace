#pragma once
#include "CoreMinimal.h"
#include "SimpleDenizenController.h"
#include "BiancaController.generated.h"

class USplineComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API ABiancaController : public ASimpleDenizenController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedUpPoint;
    
    ABiancaController();
    UFUNCTION(BlueprintCallable)
    void StartRainbowTrail(USplineComponent* Spline);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRainbowDone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRainbowCanceled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFlyingUpdate(USplineComponent* Spline, float splineTime);
    
};

