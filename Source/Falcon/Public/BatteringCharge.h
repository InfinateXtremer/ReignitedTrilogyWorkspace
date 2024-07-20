#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BatteringCharge.generated.h"

UCLASS(Blueprintable)
class FALCON_API UBatteringCharge : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UBatteringCharge();
};

