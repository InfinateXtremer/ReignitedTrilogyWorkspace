#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "PhasmidBasicDamageExecution.generated.h"

UCLASS(Blueprintable)
class UPhasmidBasicDamageExecution : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UPhasmidBasicDamageExecution();
};

