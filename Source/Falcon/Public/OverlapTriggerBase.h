#pragma once
#include "CoreMinimal.h"
#include "QuestTrigger.h"
#include "OverlapTriggerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class FALCON_API AOverlapTriggerBase : public AQuestTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantPlayerWalking;
    
    AOverlapTriggerBase();
};

