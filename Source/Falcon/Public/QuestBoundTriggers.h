#pragma once
#include "CoreMinimal.h"
#include "QuestBoundTrigger.h"
#include "QuestBoundTriggers.generated.h"

USTRUCT(BlueprintType)
struct FALCON_API FQuestBoundTriggers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FQuestBoundTrigger> Array;
    
    FQuestBoundTriggers();
};

