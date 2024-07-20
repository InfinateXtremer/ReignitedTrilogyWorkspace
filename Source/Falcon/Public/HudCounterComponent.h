#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFalconHudWidgetPosition.h"
#include "HudCounterComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UHudCounterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoHideDelay;
    
    UHudCounterComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCounter(int32 TotalCount, int32 StartCount, FName CounterName, EFalconHudWidgetPosition Position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCounter(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideCounter();
    
};

