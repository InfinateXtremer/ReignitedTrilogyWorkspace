#pragma once
#include "CoreMinimal.h"
#include "QuestSavable.h"
#include "QuestSavedBoard.generated.h"

USTRUCT(BlueprintType)
struct FQuestSavedBoard {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    //TMap<FQuestSavable, FQuestSavable> keyValues;
    
    FALCON_API FQuestSavedBoard();
};

