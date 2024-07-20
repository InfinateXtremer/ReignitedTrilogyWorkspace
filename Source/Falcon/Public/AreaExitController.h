#pragma once
#include "CoreMinimal.h"
#include "EFalconAreaExitTitle.h"
#include "PortalController.h"
#include "AreaExitController.generated.h"

UCLASS(Blueprintable)
class FALCON_API AAreaExitController : public APortalController {
    GENERATED_BODY()
public:
    AAreaExitController();
protected:
    UFUNCTION(BlueprintCallable)
    void onQuestAreaExitRequested(EFalconAreaExitTitle Title);
    
};

