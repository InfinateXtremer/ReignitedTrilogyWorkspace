#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Blueprint/UserWidget.h"
#include "FalconScreenConfigData.h"
#include "FalconWidget.generated.h"

class UFalconScreenConfigObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FALCON_API UFalconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ListenForGameInstanceKeyDown;
    
    UFalconWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FFalconScreenConfigData QueryScreen(const FFalconScreenConfigData configData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMouseButtonUpFromGameInstance(const FKey& MouseKey, bool& Handled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMouseButtonDownFromGameInstance(const FKey& MouseKey, bool& Handled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideScreen(bool immediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConfigureScreen(const FFalconScreenConfigData& configData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConfigScreen(const UFalconScreenConfigObject* configData);
    
};

