#pragma once
#include "CoreMinimal.h"
#include "SP3_UserWidgetBase.h"
#include "HealthBarWidget.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UHealthBarWidget : public USP3_UserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CharacterIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterHealth;
    
    UHealthBarWidget();
};

