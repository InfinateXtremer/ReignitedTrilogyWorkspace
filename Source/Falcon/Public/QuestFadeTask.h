#pragma once
#include "CoreMinimal.h"
#include "QuestTask.h"
#include "QuestFadeTask.generated.h"

class APlayerCameraManager;

UCLASS(Blueprintable)
class FALCON_API UQuestFadeTask : public UQuestTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* m_cam;
    
public:
    UQuestFadeTask();
};

