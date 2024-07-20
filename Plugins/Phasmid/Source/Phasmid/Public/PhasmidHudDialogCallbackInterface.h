#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PhasmidHudDialogCallbackInterface.generated.h"

UINTERFACE(Blueprintable)
class UPhasmidHudDialogCallbackInterface : public UInterface {
    GENERATED_BODY()
};

class IPhasmidHudDialogCallbackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HudDialogOptionSelected(int32 selectedIndex);
    
};

