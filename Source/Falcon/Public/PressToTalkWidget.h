#pragma once
#include "CoreMinimal.h"
#include "Engine/TextRenderActor.h"
#include "PressToTalkWidget.generated.h"

UCLASS(Abstract, Blueprintable, Transient)
class APressToTalkWidget : public ATextRenderActor {
    GENERATED_BODY()
public:
    APressToTalkWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNewVisibility(bool isShown);
    
};

