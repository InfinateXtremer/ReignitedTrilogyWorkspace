#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SP3SparxAttackLevel.h"
#include "Templates/SubclassOf.h"
#include "SP3SparxAttack.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct FSP3SparxAttack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference m_launcherComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSP3SparxAttackLevel> m_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> m_dashDmgType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dashDmgAmt;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference m_shieldComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> m_shieldDmgType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_shieldDmgAmt;
    
    FALCON_API FSP3SparxAttack();
};

