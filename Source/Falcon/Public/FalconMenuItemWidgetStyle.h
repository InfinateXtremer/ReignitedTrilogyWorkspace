#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "FalconMenuItemStyle.h"
#include "FalconMenuItemWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFalconMenuItemWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconMenuItemStyle MenuItemStyle;
    
    UFalconMenuItemWidgetStyle();
};

