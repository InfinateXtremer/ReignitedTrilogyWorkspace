

#pragma once

#include "CoreMinimal.h"
#include "PhasmidAIManager.h"
#include "GameFramework/GameModeBase.h"
#include "PhasmidGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API APhasmidGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhasmidAIManager* AIManager;
	
};
