#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SP3SparxDamage.generated.h"

class USparxHealthBarWidget;

USTRUCT(BlueprintType)
struct FSP3SparxDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_healthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USparxHealthBarWidget> m_uiHealthClass;
    
    FALCON_API FSP3SparxDamage();
};

