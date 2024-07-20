#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PhasmidGameMode.generated.h"

class UPhasmidAIManager;

UCLASS(Blueprintable, NonTransient)
class PHASMID_API APhasmidGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidAIManager* AIManager;
    
public:
    APhasmidGameMode();
};

