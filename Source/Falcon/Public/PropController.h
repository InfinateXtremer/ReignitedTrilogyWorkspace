#pragma once
#include "CoreMinimal.h"
#include "QuestController.h"
#include "PropController.generated.h"

class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API APropController : public AQuestController {
    GENERATED_BODY()
public:
    APropController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OutOfWorld(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Idle(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Hidden(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Defeated(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deactivated(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Activated(UQuestActionsComponent* Actions);
    
};

