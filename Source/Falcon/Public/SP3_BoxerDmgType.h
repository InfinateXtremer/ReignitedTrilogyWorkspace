#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "SP3_BoxerDmgType.generated.h"

UCLASS(Blueprintable)
class FALCON_API USP3_BoxerDmgType : public UDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_name;
    
    USP3_BoxerDmgType();
};

