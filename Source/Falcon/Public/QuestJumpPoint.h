#pragma once
#include "CoreMinimal.h"
#include "QuestSplinePointBase.h"
#include "QuestJumpPoint.generated.h"

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestJumpPoint : public AQuestSplinePointBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultInflection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNavToFirstPoint;
    
    AQuestJumpPoint();
};

