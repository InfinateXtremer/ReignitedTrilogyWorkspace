#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TfbIGCResultDelegate.h"
#include "TfbIGCInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UTfbIGCInterface : public UInterface {
    GENERATED_BODY()
};

class ITfbIGCInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayIGC(const FTfbIGCResult& OnFinished);
    
};

