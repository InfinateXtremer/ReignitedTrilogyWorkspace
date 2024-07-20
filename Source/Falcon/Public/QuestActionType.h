#pragma once
#include "CoreMinimal.h"
#include "EQuestAction.h"
#include "QuestActionType.generated.h"

USTRUCT(BlueprintType)
struct FALCON_API FQuestActionType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestAction Enum;
    
    FQuestActionType();
};

