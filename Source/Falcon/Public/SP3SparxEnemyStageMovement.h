#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESP3SparxEnemyStageMoveType.h"
#include "ESP3SparxEnemyStageRotType.h"
#include "SP3SparxEnemyStageMovement.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSP3SparxEnemyStageMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESP3SparxEnemyStageMoveType MoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESP3SparxEnemyStageRotType RotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotQuantize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Spline;
    
    FALCON_API FSP3SparxEnemyStageMovement();
};

