#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SparxHealthBarWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FALCON_API USparxHealthBarWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USparxHealthBarWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon(bool Left, FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHealth(bool Left, int32 Count, int32 Total, bool PlayDamageAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateWidget(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

