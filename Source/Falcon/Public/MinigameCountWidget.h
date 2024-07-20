#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MinigameCountWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMinigameCountWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMinigameCountWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateCount(int32 NewCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetCountTotal(int32 newTotal);
    
};

