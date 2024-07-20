#pragma once
#include "CoreMinimal.h"
#include "PhasmidPath_FlyPoint.h"
#include "PhasmidPath_JumpPoint.h"
#include "PhasmidPath_SwimPoint.h"
#include "PhasmidTaggedTargetPoint.h"
#include "PhasmidPatrolPath.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class APhasmidPatrolPath : public APhasmidTaggedTargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidPath_JumpPoint> Jumps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidPath_SwimPoint> Swim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidPath_FlyPoint> Fly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    APhasmidPatrolPath();
};

