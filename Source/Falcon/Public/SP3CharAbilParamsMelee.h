#pragma once
#include "CoreMinimal.h"
#include "SP3CharAbilParamsMeleeAttack.h"
#include "SP3CharAbilParamsMelee.generated.h"

USTRUCT(BlueprintType)
struct FSP3CharAbilParamsMelee {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSP3CharAbilParamsMeleeAttack> m_attacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_altInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_tBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dbgDraw;
    
    FALCON_API FSP3CharAbilParamsMelee();
};

