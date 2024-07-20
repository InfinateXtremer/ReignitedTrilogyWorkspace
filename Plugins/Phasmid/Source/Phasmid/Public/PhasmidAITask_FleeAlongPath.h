#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "PhasmidAITask_FleeAlongPath.generated.h"

class AAIController;
class AActor;
class APhasmidPatrolPath;
class UPhasmidAITask_FleeAlongPath;

UCLASS(Blueprintable)
class UPhasmidAITask_FleeAlongPath : public UAITask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebounceTime;

protected:
    UFUNCTION(BlueprintCallable)
    void OnTurnAroundTimerExpired();
    
public:
    UFUNCTION(BlueprintCallable)
    static UPhasmidAITask_FleeAlongPath* FleeAlongPath(AAIController* Controller, APhasmidPatrolPath* Path, AActor* FleeFromTarget, bool DontStop, bool FaceTowardsFacingTarget);
    
};

