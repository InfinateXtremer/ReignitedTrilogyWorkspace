#pragma once
#include "CoreMinimal.h"
#include "QuestStrikePoint.h"
#include "QuestSplinePointBase.generated.h"

class USplineComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestSplinePointBase : public AQuestStrikePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResetSpline: 1;
    
    AQuestSplinePointBase();
};

