#pragma once
#include "CoreMinimal.h"
#include "QuestLatentTask.h"
#include "CameraFollowTask.generated.h"

UCLASS(Blueprintable)
class FALCON_API UCameraFollowTask : public UQuestLatentTask {
    GENERATED_BODY()
public:
    UCameraFollowTask();
};

