#pragma once
#include "CoreMinimal.h"
#include "QuestMoveTask.h"
#include "QuestNavTask.generated.h"

UCLASS(Blueprintable)
class FALCON_API UQuestNavTask : public UQuestMoveTask {
    GENERATED_BODY()
public:
    UQuestNavTask();
};

