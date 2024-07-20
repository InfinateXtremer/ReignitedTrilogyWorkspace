#pragma once
#include "CoreMinimal.h"
#include "MobileDenizenController.h"
#include "ThiefController.generated.h"

class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API AThiefController : public AMobileDenizenController {
    GENERATED_BODY()
public:
    AThiefController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Evading(UQuestActionsComponent* Actions);
    
};

