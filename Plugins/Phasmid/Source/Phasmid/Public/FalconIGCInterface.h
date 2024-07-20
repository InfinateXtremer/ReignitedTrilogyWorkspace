#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FalconIGCResultDelegate.h"
#include "FalconIGCInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UFalconIGCInterface : public UInterface {
    GENERATED_BODY()
};

class IFalconIGCInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayIGC(const FFalconIGCResult& OnFinished);
    
};

