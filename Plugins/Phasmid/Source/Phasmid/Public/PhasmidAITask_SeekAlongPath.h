#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "PhasmidAITask_SeekAlongPath.generated.h"

class AAIController;
class AActor;
class APhasmidPatrolPath;
class UPhasmidAITask_SeekAlongPath;

UCLASS(Blueprintable)
class UPhasmidAITask_SeekAlongPath : public UAITask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopAtClosestPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideOrientToMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebug_DrawSeekBehavior: 1;
    
    UFUNCTION(BlueprintCallable)
    static UPhasmidAITask_SeekAlongPath* SeekAlongPath(AAIController* Controller, APhasmidPatrolPath* Path, AActor* SeekTarget);
    
};

