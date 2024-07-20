#pragma once
#include "CoreMinimal.h"
#include "SP3SparxEnemyStageAttack.h"
#include "SP3SparxEnemyStageDamage.h"
#include "SP3SparxEnemyStageMovement.h"
#include "SP3SparxEnemyStageSequence.h"
#include "SP3SparxEnemyStage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSP3SparxEnemyStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3SparxEnemyStageMovement Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3SparxEnemyStageAttack Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3SparxEnemyStageDamage Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSP3SparxEnemyStageSequence> Sequence;
    
    FALCON_API FSP3SparxEnemyStage();
};

