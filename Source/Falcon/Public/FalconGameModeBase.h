#pragma once
#include "CoreMinimal.h"
#include "PhasmidGameMode.h"
#include "FalconGameModeBase.generated.h"

class UQuestLevelManager;

UCLASS(Blueprintable, NonTransient)
class FALCON_API AFalconGameModeBase : public APhasmidGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestLevelManager* Quests;
    
public:
    AFalconGameModeBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestLevelManager* GetQuestLevelManager() const;
    
};

