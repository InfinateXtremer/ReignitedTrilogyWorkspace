#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HudDownloadMessageComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UHudDownloadMessageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHudDownloadMessageComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDownloadMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideDownloadMessage();
    
};

