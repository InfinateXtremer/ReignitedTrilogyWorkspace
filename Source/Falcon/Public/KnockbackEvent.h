#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "KnockbackEvent.generated.h"

USTRUCT(BlueprintType)
struct FALCON_API FKnockbackEvent : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    FKnockbackEvent();
};

