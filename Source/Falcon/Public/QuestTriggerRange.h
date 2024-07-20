#pragma once
#include "CoreMinimal.h"
#include "OverlapTriggerBase.h"
#include "QuestTriggerRange.generated.h"

class USphereComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestTriggerRange : public AOverlapTriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    AQuestTriggerRange();
};

