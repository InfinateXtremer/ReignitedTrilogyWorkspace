#pragma once
#include "CoreMinimal.h"
#include "SP3SparxEnemyStageAttack.generated.h"

USTRUCT(BlueprintType)
struct FSP3SparxEnemyStageAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireDelay;
    
    FALCON_API FSP3SparxEnemyStageAttack();
};

