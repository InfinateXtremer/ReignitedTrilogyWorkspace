#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AmmoGaugeWidget.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAmmoGaugeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoCount;
    
    UAmmoGaugeWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAmmoWidget(UWidget* Content);
    
};

