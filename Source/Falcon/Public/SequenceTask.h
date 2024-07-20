#pragma once
#include "CoreMinimal.h"
#include "QuestTask.h"
#include "SequenceTask.generated.h"

UCLASS(Blueprintable)
class USequenceTask : public UQuestTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestTask* m_current;
    
public:
    USequenceTask();
};

