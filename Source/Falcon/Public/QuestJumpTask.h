#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "QuestMoveTask.h"
#include "QuestJumpTask.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class FALCON_API UQuestJumpTask : public UQuestMoveTask {
    GENERATED_BODY()
public:
    UQuestJumpTask();
protected:
    UFUNCTION(BlueprintCallable)
    void OnStuckSpline();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
};

