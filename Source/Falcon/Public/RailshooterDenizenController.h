#pragma once
#include "CoreMinimal.h"
#include "MobileDenizenController.h"
#include "RailshooterDenizenController.generated.h"

class UQuestActionsComponent;

UCLASS(Blueprintable)
class FALCON_API ARailshooterDenizenController : public AMobileDenizenController {
    GENERATED_BODY()
public:
    ARailshooterDenizenController();
    UFUNCTION(BlueprintCallable)
    void SaveResetState();
    
    UFUNCTION(BlueprintCallable)
    void ResetState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetActor(UQuestActionsComponent* Actions);
    
};

