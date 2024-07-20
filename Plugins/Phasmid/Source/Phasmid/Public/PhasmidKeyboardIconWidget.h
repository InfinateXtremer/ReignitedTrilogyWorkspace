#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "PhasmidKeyboardIconWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPhasmidKeyboardIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPhasmidKeyboardIconWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSize(FVector2D NewSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyForIconText(FKey Key);
    
};

