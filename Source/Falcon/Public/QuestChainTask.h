#pragma once
#include "CoreMinimal.h"
#include "QuestTask.h"
#include "QuestChainTask.generated.h"

UCLASS(Blueprintable)
class FALCON_API UQuestChainTask : public UQuestTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestTask* m_other;
    
public:
    UQuestChainTask();
};

