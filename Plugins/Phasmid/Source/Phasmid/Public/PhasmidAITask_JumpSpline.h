#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "Engine/EngineTypes.h"
#include "PhasmidAITask_JumpSpline.generated.h"

class AAIController;
class UPhasmidAITask_JumpSpline;
class USplineComponent;

UCLASS(Blueprintable)
class PHASMID_API UPhasmidAITask_JumpSpline : public UAITask {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UPhasmidAITask_JumpSpline* JumpSpline(AAIController* Controller, USplineComponent* Spline, bool bWalkToSpline);
    
private:
    UFUNCTION(BlueprintCallable)
    void CharacterLanded(const FHitResult& Hit);
    
};

