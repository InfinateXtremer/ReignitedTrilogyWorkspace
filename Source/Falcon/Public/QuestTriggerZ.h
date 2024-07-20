#pragma once
#include "CoreMinimal.h"
#include "QuestTrigger.h"
#include "QuestTriggerZ.generated.h"

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestTriggerZ : public AQuestTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tolerance;
    
    AQuestTriggerZ();
};

