#pragma once
#include "CoreMinimal.h"
#include "QuestBoundPoint.h"
#include "QuestBoundPoints.generated.h"

USTRUCT(BlueprintType)
struct FALCON_API FQuestBoundPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FQuestBoundPoint> Array;
    
    FQuestBoundPoints();
};

