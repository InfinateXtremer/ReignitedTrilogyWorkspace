#pragma once
#include "CoreMinimal.h"
#include "QuestTask.h"
#include "HighScoreTask.generated.h"

class USkateScoreWidget;

UCLASS(Blueprintable)
class UHighScoreTask : public UQuestTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkateScoreWidget* m_screen;
    
public:
    UHighScoreTask();
private:
    UFUNCTION(BlueprintCallable)
    void OnClose(FName ignore);
    
};

