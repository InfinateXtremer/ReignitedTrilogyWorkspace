#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETimerBarType.h"
#include "HudTimerBarComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UHudTimerBarComponent : public UActorComponent {
    GENERATED_BODY()
public:

    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void ShowTimerBar(float Duration, TEnumAsByte<ETimerBarType> Timer);
    //
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void Hide();
    
};

