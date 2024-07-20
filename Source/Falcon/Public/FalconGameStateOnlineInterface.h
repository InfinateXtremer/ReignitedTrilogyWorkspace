#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FalconGameStateOnlineInterface.generated.h"

UINTERFACE(Blueprintable)
class FALCON_API UFalconGameStateOnlineInterface : public UInterface {
    GENERATED_BODY()
};

class FALCON_API IFalconGameStateOnlineInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnToTitle(bool reloadSave);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InvokeSystemLogin();
    
};

