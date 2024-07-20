#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EFalconHudWidgetPosition.h"
#include "ETrickStatus.h"
#include "TrickWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTrickWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrickBufferTime;
    
    UTrickWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTrickScore(const FString& TrickName, int32 TrickScore, ETrickStatus TrickStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWidget(FName IconName, EFalconHudWidgetPosition Position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTotalScore(int32 score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearScore();
    
};

