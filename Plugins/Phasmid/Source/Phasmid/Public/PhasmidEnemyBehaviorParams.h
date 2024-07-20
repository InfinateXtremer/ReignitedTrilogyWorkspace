#pragma once
#include "CoreMinimal.h"
#include "PhasmidEnemyBehaviorParams.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidEnemyBehaviorParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentBehaviorUtilityBonus;
    
    PHASMID_API FPhasmidEnemyBehaviorParams();
};

