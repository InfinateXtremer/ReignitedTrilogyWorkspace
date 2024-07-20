#pragma once
#include "CoreMinimal.h"
#include "QuestBoundPoint.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FALCON_API FQuestBoundPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> StrikePoint;
    
    FQuestBoundPoint();
};

