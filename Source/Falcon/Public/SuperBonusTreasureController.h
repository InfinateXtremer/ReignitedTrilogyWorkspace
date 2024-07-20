#pragma once
#include "CoreMinimal.h"
#include "PropController.h"
#include "SuperBonusTreasureController.generated.h"

class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API ASuperBonusTreasureController : public APropController {
    GENERATED_BODY()
public:
    ASuperBonusTreasureController();
    UFUNCTION(BlueprintCallable)
    void GiveGems(UQuestActionsComponent* Actions);
    
};

