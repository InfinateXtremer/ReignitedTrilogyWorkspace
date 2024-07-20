#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "QuestTypeEntry.generated.h"

class AQuestController;

USTRUCT(BlueprintType)
struct FALCON_API FQuestTypeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScriptClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AQuestController> DefaultController;
    
    FQuestTypeEntry();
};

