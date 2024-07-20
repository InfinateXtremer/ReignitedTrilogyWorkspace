#pragma once
#include "CoreMinimal.h"
#include "QuestTask.h"
#include "QuestChallengeTask.generated.h"

UCLASS(Blueprintable)
class FALCON_API UQuestChallengeTask : public UQuestTask {
    GENERATED_BODY()
public:
    UQuestChallengeTask();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float RemainingSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTicking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentScore() const;
    
    UFUNCTION(BlueprintCallable)
    void EndTheTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ElapsedSeconds() const;
    
};

