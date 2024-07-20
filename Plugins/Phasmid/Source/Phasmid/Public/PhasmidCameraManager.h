#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Camera/PlayerCameraManager.h"
#include "PhasmidCameraManager.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UPhasmidCameraManager : public UInterface {
    GENERATED_BODY()
};

class IPhasmidCameraManager : public IInterface {
    GENERATED_BODY()
public:

    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void PCM_PushViewTarget(AActor* ViewTarget, float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing);
    //
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void PCM_PopViewTarget(AActor* ViewTarget, float BlendTime);
    
};

