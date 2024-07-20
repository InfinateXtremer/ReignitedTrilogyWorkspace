#pragma once
#include "CoreMinimal.h"
#include "QuestController.h"
#include "SpawnController.generated.h"

class UQuestActionsComponent;

UCLASS(Blueprintable)
class FALCON_API ASpawnController : public AQuestController {
    GENERATED_BODY()
public:
    ASpawnController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Idle(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Generating(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Defeated(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Active(UQuestActionsComponent* Actions);
    
};

