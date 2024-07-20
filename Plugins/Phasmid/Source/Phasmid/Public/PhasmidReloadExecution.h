#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "PhasmidReloadExecution.generated.h"

UCLASS(Blueprintable)
class UPhasmidReloadExecution : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UPhasmidReloadExecution();
};

