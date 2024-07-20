#pragma once
#include "CoreMinimal.h"
#include "MobileDenizenController.h"
#include "BalloonistController.generated.h"

class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API ABalloonistController : public AMobileDenizenController {
    GENERATED_BODY()
public:
    ABalloonistController();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Instructing(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Guiding(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Celebrating(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Ballooning(UQuestActionsComponent* Actions);
    
};

