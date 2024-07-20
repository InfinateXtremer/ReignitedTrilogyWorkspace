#pragma once
#include "CoreMinimal.h"
#include "Components/MultiLineEditableTextBox.h"
#include "Components/ScrollBox.h"
#include "FalconMultiLineEditableTextBox.generated.h"

UCLASS(Blueprintable)
class FALCON_API UFalconMultiLineEditableTextBox : public UMultiLineEditableTextBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserScrolledEvent OnVScrollBarScrolled;
    
    UFalconMultiLineEditableTextBox();
    UFUNCTION(BlueprintCallable)
    void ScrollPage(bool inFwd, float& scrollPct);
    
};

