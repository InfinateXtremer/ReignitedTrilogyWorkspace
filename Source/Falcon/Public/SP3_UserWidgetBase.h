#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SP3_UserWidgetBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FALCON_API USP3_UserWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    USP3_UserWidgetBase();
    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void SetShown(bool NewShow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHide(bool destroy);
    
    UFUNCTION(BlueprintCallable)
    void Hide(bool destroy);
    
};

