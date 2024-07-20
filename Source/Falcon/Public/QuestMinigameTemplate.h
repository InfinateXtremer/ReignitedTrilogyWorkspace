#pragma once
#include "CoreMinimal.h"
#include "QuestController.h"
#include "QuestMinigameTemplate.generated.h"

class UQuestActionsComponent;

UCLASS(Blueprintable)
class FALCON_API AQuestMinigameTemplate : public AQuestController {
    GENERATED_BODY()
public:
    AQuestMinigameTemplate();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Ticking(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Idle(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Completed(UQuestActionsComponent* Actions);
    
};

