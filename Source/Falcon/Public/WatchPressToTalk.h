#pragma once
#include "CoreMinimal.h"
#include "QuestTask.h"
#include "WatchPressToTalk.generated.h"

class APressToTalkWidget;

UCLASS(Blueprintable)
class FALCON_API UWatchPressToTalk : public UQuestTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APressToTalkWidget* m_ui;
    
public:
    UWatchPressToTalk();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTalkPressed();
    
};

