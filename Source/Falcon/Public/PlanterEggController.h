#pragma once
#include "CoreMinimal.h"
#include "EggController.h"
#include "PlanterEggController.generated.h"

class UQuestActionsComponent;

UCLASS(Blueprintable)
class APlanterEggController : public AEggController {
    GENERATED_BODY()
public:
    APlanterEggController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaceEgg(UQuestActionsComponent* Actions);
    
};

