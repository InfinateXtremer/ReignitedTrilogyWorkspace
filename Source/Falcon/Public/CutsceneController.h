#pragma once
#include "CoreMinimal.h"
#include "QuestController.h"
#include "CutsceneController.generated.h"

class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API ACutsceneController : public AQuestController {
    GENERATED_BODY()
public:
    ACutsceneController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ZapPlayer(const FName& Checkpoint, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Restoring(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Playing(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadingOut(UQuestActionsComponent* Actions);
    
};

