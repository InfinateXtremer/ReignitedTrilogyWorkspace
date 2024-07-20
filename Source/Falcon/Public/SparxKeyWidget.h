#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESparxKeyType.h"
#include "SparxKeyWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FALCON_API USparxKeyWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USparxKeyWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyType(ESparxKeyType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

