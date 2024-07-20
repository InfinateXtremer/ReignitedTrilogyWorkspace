#pragma once
#include "CoreMinimal.h"
#include "SP3CharAbilParamsDoubleJump.generated.h"

USTRUCT(BlueprintType)
struct FSP3CharAbilParamsDoubleJump {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_moveScalar;
    
    FALCON_API FSP3CharAbilParamsDoubleJump();
};

