#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HudTimerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UHudTimerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHudTimerComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRemainingSeconds(float Seconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTimer();
    
};

