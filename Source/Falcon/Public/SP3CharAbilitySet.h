#pragma once
#include "CoreMinimal.h"
#include "SP3CharAbilityInfo.h"
#include "SP3CharAbilitySet.generated.h"

USTRUCT(BlueprintType)
struct FSP3CharAbilitySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSP3CharAbilityInfo> m_abils;
    
    FALCON_API FSP3CharAbilitySet();
};

