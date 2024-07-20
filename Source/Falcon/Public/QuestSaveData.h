#pragma once
#include "CoreMinimal.h"
#include "QuestNameTable.h"
#include "QuestSavable.h"
#include "QuestSavedBoard.h"
#include "QuestSaveData.generated.h"

USTRUCT(BlueprintType)
struct FQuestSaveData {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    //FQuestNameTable names;
    //
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    //TMap<FQuestSavable, FQuestSavedBoard> boards;
    
    FALCON_API FQuestSaveData();
};

