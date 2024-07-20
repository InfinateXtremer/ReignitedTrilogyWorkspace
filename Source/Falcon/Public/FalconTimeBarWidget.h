#pragma once
#include "CoreMinimal.h"
#include "EFalconTimeBarPlacement.h"
#include "EFalconTimeBarType.h"
#include "FalconWidget.h"
#include "FalconTimeBarWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FALCON_API UFalconTimeBarWidget : public UFalconWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFalconTimeBarPlacement _placementType;
    
    UFalconTimeBarWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimeBar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTimeBar(float inDuration, EFalconTimeBarType inType, EFalconTimeBarPlacement inPlacement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimeScale(float inTimeScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTimeBar();
    
    UFUNCTION(BlueprintCallable)
    EFalconTimeBarPlacement GetPlacementType(int32 inType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

