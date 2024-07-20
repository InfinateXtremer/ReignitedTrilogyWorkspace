#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TfbGameStateInterface.generated.h"

UINTERFACE(Blueprintable)
class UTfbGameStateInterface : public UInterface {
    GENERATED_BODY()
};

class ITfbGameStateInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTfbCutsceneEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTfbCutsceneBegin();
    
};

