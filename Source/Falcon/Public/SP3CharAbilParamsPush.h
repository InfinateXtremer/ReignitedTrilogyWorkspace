#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SP3CharAbilParamsPush.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSP3CharAbilParamsPush {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_joyMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_attachTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> m_blockClasses;
    
    FALCON_API FSP3CharAbilParamsPush();
};

