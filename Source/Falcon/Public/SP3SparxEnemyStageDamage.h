#pragma once
#include "CoreMinimal.h"
#include "ESP3_ProjColType.h"
#include "Templates/SubclassOf.h"
#include "SP3SparxEnemyStageDamage.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct FSP3SparxEnemyStageDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InvulnParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> AcceptDmg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> IgnoreDmg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESP3_ProjColType ProjColType;
    
    FALCON_API FSP3SparxEnemyStageDamage();
};

