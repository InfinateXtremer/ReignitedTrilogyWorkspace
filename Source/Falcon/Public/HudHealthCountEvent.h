#pragma once
#include "CoreMinimal.h"
#include "HudHealthCountEvent.generated.h"

USTRUCT(BlueprintType)
struct FHudHealthCountEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 eventLifeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 eventPartialLifeCount;
    
    FALCON_API FHudHealthCountEvent();
};

