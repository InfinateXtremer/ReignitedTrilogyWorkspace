#pragma once
#include "CoreMinimal.h"
#include "QuestMoveTask.h"
#include "QuestWalkTask.generated.h"

UCLASS(Blueprintable)
class FALCON_API UQuestWalkTask : public UQuestMoveTask {
    GENERATED_BODY()
public:
    UQuestWalkTask();
};

