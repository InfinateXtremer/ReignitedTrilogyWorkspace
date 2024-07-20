#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "FalconAIControllerUnpossessedDelegate.h"
#include "FalconAIController.generated.h"

UCLASS(Blueprintable)
class AFalconAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconAIControllerUnpossessed OnFalconAIUnpossessed;
    
    AFalconAIController();
};

