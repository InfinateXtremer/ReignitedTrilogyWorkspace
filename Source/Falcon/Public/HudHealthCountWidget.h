#pragma once
#include "CoreMinimal.h"
#include "EHudHealthCountState.h"
#include "FalconWidget.h"
#include "HudHealthCountEvent.h"
#include "HudHealthCountWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FALCON_API UHudHealthCountWidget : public UFalconWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHudHealthCountEvent> pendingUpdateEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudHealthCountEvent currentUpdateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHudHealthCountState uiState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lifeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 partialLifeCount;
    
    UHudHealthCountWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HealthCountUpdated();
    
};

