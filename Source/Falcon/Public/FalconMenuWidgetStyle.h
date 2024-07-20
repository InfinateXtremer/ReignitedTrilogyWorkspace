#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "FalconMenuStyle.h"
#include "FalconMenuWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFalconMenuWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconMenuStyle MenuStyle;
    
    UFalconMenuWidgetStyle();
};

