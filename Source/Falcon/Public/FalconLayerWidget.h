#pragma once
#include "CoreMinimal.h"
#include "FalconWidget.h"
#include "FalconLayerWidget.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FALCON_API UFalconLayerWidget : public UFalconWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float currentViewportScale;
    
    UFalconLayerWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ViewportScaleUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveScreen(UClass* inScreenClass, bool immediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUserWidget* FindScreen(UClass* inScreenClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddScreen(UFalconWidget* inScreen, int32 ZOrder);
    
};

