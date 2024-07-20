#pragma once
#include "CoreMinimal.h"
#include "QuestStrikePoint.h"
#include "QuestWheelPoint.generated.h"

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestWheelPoint : public AQuestStrikePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWiddershins;
    
    AQuestWheelPoint();
};

