#pragma once
#include "CoreMinimal.h"
#include "QuestController.h"
#include "MissionController.generated.h"

class UQuestActionsComponent;

UCLASS(Blueprintable)
class FALCON_API AMissionController : public AQuestController {
    GENERATED_BODY()
public:
    AMissionController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopMission(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMission(UQuestActionsComponent* Actions);
    
};

