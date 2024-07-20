#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FalconLevelScriptInterface.generated.h"

UINTERFACE(Blueprintable)
class UFalconLevelScriptInterface : public UInterface {
    GENERATED_BODY()
};

class IFalconLevelScriptInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCutsceneEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCutsceneBegin();
    
};

