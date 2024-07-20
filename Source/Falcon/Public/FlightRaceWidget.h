#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FlightRaceWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FALCON_API UFlightRaceWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFlightRaceWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlace(int32 place);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLap(int32 Count, int32 Total);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

