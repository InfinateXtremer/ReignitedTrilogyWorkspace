#pragma once
#include "CoreMinimal.h"
#include "QuestController.h"
#include "MovableStrikePointController.generated.h"

UCLASS(Blueprintable)
class AMovableStrikePointController : public AQuestController {
    GENERATED_BODY()
public:
    AMovableStrikePointController();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMove();
    
};

