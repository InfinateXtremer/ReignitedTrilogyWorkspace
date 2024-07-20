#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SP3_UserWidgetBase.h"
#include "SP3_ReticleWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USP3_ReticleWidget : public USP3_UserWidgetBase {
    GENERATED_BODY()
public:
    USP3_ReticleWidget();
    UFUNCTION(BlueprintCallable)
    void SetOffset(const FVector2D& Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetOffset(const FVector2D& Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFire();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetOffset() const;
    
    UFUNCTION(BlueprintCallable)
    void Fire();
    
};

