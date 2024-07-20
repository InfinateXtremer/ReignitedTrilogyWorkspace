#pragma once
#include "CoreMinimal.h"
#include "QuestTask.h"
#include "CooldownTask.generated.h"

UCLASS(Blueprintable)
class FALCON_API UCooldownTask : public UQuestTask {
    GENERATED_BODY()
public:
    UCooldownTask();
};

