#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CameraSettings.h"
#include "PhasmidManagedCameraInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPhasmidManagedCameraInterface : public UInterface {
    GENERATED_BODY()
};

class IPhasmidManagedCameraInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PMCI_SetOffset(float Offset, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float PMCI_GetCurrentOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PMCI_ApplyCameraSettings(FCameraSettings Settings);
    
};

