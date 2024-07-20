#pragma once
#include "CoreMinimal.h"
#include "QuestTask.h"
#include "QuestCutsceneTask.generated.h"

UCLASS(Blueprintable)
class FALCON_API UQuestCutsceneTask : public UQuestTask {
    GENERATED_BODY()
public:
    UQuestCutsceneTask();
private:
    UFUNCTION(BlueprintCallable)
    void RxSequenceFinished();
    
};

