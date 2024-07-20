#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BuzzSaw.generated.h"

UCLASS(Blueprintable)
class FALCON_API UBuzzSaw : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UBuzzSaw();
};

