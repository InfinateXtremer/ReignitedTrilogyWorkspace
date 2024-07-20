#pragma once
#include "CoreMinimal.h"
#include "PhasmidGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "PhasmidGameplayAbility_DamageTargets.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class PHASMID_API UPhasmidGameplayAbility_DamageTargets : public UPhasmidGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DamageEffect;
    
    UPhasmidGameplayAbility_DamageTargets();
};

