#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "Engine/EngineTypes.h"
#include "PhasmidPathFlags.h"
#include "PhasmidAITask_FollowPath.generated.h"

class AAIController;
class ACharacter;
class APhasmidPatrolPath;
class UPhasmidAITask_FollowPath;

UCLASS(Blueprintable)
class UPhasmidAITask_FollowPath : public UAITask {
    GENERATED_BODY()

private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PrevCustomMode);
    
public:
    UFUNCTION(BlueprintCallable)
    static UPhasmidAITask_FollowPath* FollowPathToSplineKey(AAIController* Controller, APhasmidPatrolPath* Path, FPhasmidPathFlags Flags, float Key);
    
    UFUNCTION(BlueprintCallable)
    static UPhasmidAITask_FollowPath* FollowPath(AAIController* Controller, APhasmidPatrolPath* Path, FPhasmidPathFlags Flags);
    
};

