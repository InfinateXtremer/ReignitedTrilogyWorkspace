#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BuzzLevelSync.generated.h"

UCLASS(Blueprintable)
class FALCON_API UBuzzLevelSync : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector PlayerTarget;
    
    UBuzzLevelSync();
};

