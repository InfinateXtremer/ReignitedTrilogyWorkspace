#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TfbHudDialogCallbackInterface.generated.h"

UINTERFACE(Blueprintable)
class TFBPLUGIN_API UTfbHudDialogCallbackInterface : public UInterface {
    GENERATED_BODY()
};

class TFBPLUGIN_API ITfbHudDialogCallbackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HudDialogOptionSelected(int32 selectedIndex);
    
};

