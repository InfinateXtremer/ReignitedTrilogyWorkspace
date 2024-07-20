#pragma once
#include "CoreMinimal.h"
#include "PhasmidAISplineMoveRequest.generated.h"

class USplineComponent;

USTRUCT(BlueprintType)
struct FPhasmidAISplineMoveRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* GoalSpline;
    
public:
    PHASMID_API FPhasmidAISplineMoveRequest();
};

