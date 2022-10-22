

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "FalconAIController.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconAIControllerOnFalconAIUnpossessed);
UCLASS()
class PHASMID_API AFalconAIController : public AAIController
{
	GENERATED_BODY()


public:
	UPROPERTY(BlueprintAssignable)
	FFalconAIControllerOnFalconAIUnpossessed OnFalconAIUnpossessed;

	
	
};
