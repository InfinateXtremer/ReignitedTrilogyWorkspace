#pragma once
#include "CoreMinimal.h"
#include "FalconLoadingScreenStateStartDelegate.h"
#include "FalconLoadingScreenStateUpdateDelegate.h"
#include "FalconLoadingStateCallbacks.generated.h"

USTRUCT(BlueprintType)
struct FFalconLoadingStateCallbacks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconLoadingScreenStateStart OnStartCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconLoadingScreenStateUpdate OnUpdateCallback;
    
    FALCON_API FFalconLoadingStateCallbacks();
};

