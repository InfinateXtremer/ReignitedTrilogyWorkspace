#pragma once
#include "CoreMinimal.h"
#include "QuestStrikePoint.h"
#include "QuestWalkPoint.generated.h"

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestWalkPoint : public AQuestStrikePoint {
    GENERATED_BODY()
public:
    AQuestWalkPoint();
};

