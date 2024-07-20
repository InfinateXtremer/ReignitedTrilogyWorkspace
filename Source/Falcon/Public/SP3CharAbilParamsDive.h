#pragma once
#include "CoreMinimal.h"
#include "SP3CharAbilParamsDive.generated.h"

USTRUCT(BlueprintType)
struct FSP3CharAbilParamsDive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_friction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_gravity;
    
    FALCON_API FSP3CharAbilParamsDive();
};

