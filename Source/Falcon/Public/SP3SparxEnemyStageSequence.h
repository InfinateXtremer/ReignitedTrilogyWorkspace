#pragma once
#include "CoreMinimal.h"
#include "ESP3SparxEnemyStageSeqType.h"
#include "SP3SparxEnemyStageSequence.generated.h"

USTRUCT(BlueprintType)
struct FSP3SparxEnemyStageSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESP3SparxEnemyStageSeqType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextStage;
    
    FALCON_API FSP3SparxEnemyStageSequence();
};

