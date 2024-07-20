#pragma once
#include "CoreMinimal.h"
#include "OverlapTriggerBase.h"
#include "QuestTriggerBox.generated.h"

class UBoxComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestTriggerBox : public AOverlapTriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    AQuestTriggerBox();
};

