#pragma once
#include "CoreMinimal.h"
#include "SP3_UserWidgetBase.h"
#include "SP3_TimerWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USP3_TimerWidget : public USP3_UserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayTime;
    
    USP3_TimerWidget();
};

