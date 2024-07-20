#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SkateBoostBarWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FALCON_API USkateBoostBarWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USkateBoostBarWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowBoost(bool On);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon(const FName& Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBarProgressPct(float pct);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBarProgress(int32 Count, int32 Total);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

