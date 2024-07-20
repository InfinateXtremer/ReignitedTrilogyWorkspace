#pragma once
#include "CoreMinimal.h"
#include "SP3SparxEnemySimpleMovement.h"
#include "SP3_SparxEnemyBase.h"
#include "SP3_SparxEnemySimple.generated.h"

UCLASS(Blueprintable)
class FALCON_API ASP3_SparxEnemySimple : public ASP3_SparxEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3SparxEnemySimpleMovement m_movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_deathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pivotOnly;
    
    ASP3_SparxEnemySimple();
};

