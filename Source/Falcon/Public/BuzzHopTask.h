#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "Engine/EngineTypes.h"
#include "BuzzHopTask.generated.h"

UCLASS(Blueprintable)
class FALCON_API UBuzzHopTask : public UAITask {
    GENERATED_BODY()
public:

private:
    UFUNCTION(BlueprintCallable)
    void OnLanded(const FHitResult& Hit);
    
};

