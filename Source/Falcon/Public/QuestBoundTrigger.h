#pragma once
#include "CoreMinimal.h"
#include "QuestBoundTrigger.generated.h"

class AQuestTrigger;

USTRUCT(BlueprintType)
struct FALCON_API FQuestBoundTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AQuestTrigger> Trigger;
    
    FQuestBoundTrigger();
};

