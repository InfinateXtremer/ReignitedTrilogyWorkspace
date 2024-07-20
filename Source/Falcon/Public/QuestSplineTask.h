#pragma once
#include "CoreMinimal.h"
#include "QuestMoveTask.h"
#include "QuestSplineTask.generated.h"

UCLASS(Blueprintable)
class FALCON_API UQuestSplineTask : public UQuestMoveTask {
    GENERATED_BODY()
public:
    UQuestSplineTask();
};

