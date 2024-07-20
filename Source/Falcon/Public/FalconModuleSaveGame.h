#pragma once
#include "CoreMinimal.h"
#include "FalconSaveGame.h"
#include "QuestSaveData.h"
#include "FalconModuleSaveGame.generated.h"

UCLASS(Blueprintable)
class FALCON_API UFalconModuleSaveGame : public UFalconSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FQuestSaveData QuestSaveData;
    
    UFalconModuleSaveGame();
};

