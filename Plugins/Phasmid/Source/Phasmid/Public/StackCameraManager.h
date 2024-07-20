#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/PlayerCameraManager.h"
#include "CameraContext.h"
#include "CameraSettings.h"
#include "StackCameraManager.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class PHASMID_API AStackCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraContext> CameraContextStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraContext> PendingDeleteContexts;
    
public:
    AStackCameraManager();
    UFUNCTION(BlueprintCallable)
    void ShowCameraDebugInfo(bool bShowDebugInfo);
    
    UFUNCTION(BlueprintCallable)
    bool PopViewTargetWithBlendOverride(AActor* ExistingViewTarget, float TimeToBlendOut, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool bDeleteActorAfterBlend);
    
    UFUNCTION(BlueprintCallable)
    bool PopViewTarget(AActor* ExistingViewTarget, float TimeToBlendOut, bool bDeleteActorAfterBlend, bool bUnlockViewTarget);
    
    UFUNCTION(BlueprintCallable)
    void ClearStackToDefault();
    
    UFUNCTION(BlueprintCallable)
    void BP_PushViewTarget(AActor* NewViewTarget, FViewTargetTransitionParams TransitionParams);
    
    UFUNCTION(BlueprintCallable)
    void BP_PushManagedCamera(AActor* ManagedCamera, FCameraSettings Settings, FViewTargetTransitionParams TransitionParams);
    
};

