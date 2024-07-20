#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AbilityTask.h"
#include "Knockback.generated.h"

UCLASS(Blueprintable)
class FALCON_API UKnockback : public UAbilityTask {
    GENERATED_BODY()
public:
    UKnockback();
private:
    UFUNCTION(BlueprintCallable)
    void OnLanded(const FHitResult& Hit);
    
};

