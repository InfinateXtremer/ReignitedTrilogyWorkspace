#pragma once
#include "CoreMinimal.h"
#include "QuestSplinePointBase.h"
#include "QuestNavPoint.generated.h"

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestNavPoint : public AQuestSplinePointBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDirectMove;
    
    AQuestNavPoint();
    UFUNCTION(BlueprintCallable)
    void MovedPoint();
    
};

