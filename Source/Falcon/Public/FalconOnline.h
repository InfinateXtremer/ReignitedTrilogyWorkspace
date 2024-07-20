#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnLoginUICompleteDelegate.h"
#include "FalconOnline.generated.h"

UCLASS(Blueprintable)
class FALCON_API UFalconOnline : public UObject {
    GENERATED_BODY()
public:
    UFalconOnline();
    UFUNCTION(BlueprintCallable)
    static void ShowLoginUI(FOnLoginUIComplete OnLoginUIComplete);
    
};

