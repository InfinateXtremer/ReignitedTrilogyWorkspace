#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LS313CheckFade.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API ULS313CheckFade : public UActorComponent {
    GENERATED_BODY()
public:
    ULS313CheckFade();
    UFUNCTION(BlueprintCallable)
    bool IsFading();
    
};

