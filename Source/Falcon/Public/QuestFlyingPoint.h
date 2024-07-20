#pragma once
#include "CoreMinimal.h"
#include "QuestSplinePointBase.h"
#include "QuestFlyingPoint.generated.h"

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestFlyingPoint : public AQuestSplinePointBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultInflection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNavToFirstPoint;
    
    AQuestFlyingPoint();
};

