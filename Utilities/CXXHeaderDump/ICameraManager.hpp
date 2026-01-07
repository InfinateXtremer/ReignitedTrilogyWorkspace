#ifndef UE4SS_SDK_ICameraManager_HPP
#define UE4SS_SDK_ICameraManager_HPP

class IICameraManager_C : public IInterface
{

    void IUpdateActiveCamera(bool IsActive);
    void IPopCameraFromStackBlendOverride(class AActor* ExistingViewTarget, float TimeToBlendOut, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool DeleteActorAfterBlend);
    void IGetFollowCameraComponent(class UFollowCameraComponent*& FollowCameraComponent);
    void ISnapDefaultCameraBehindPlayer();
    void IShowCameraDebugInfo(bool ShowDebugInfo);
    void INotifyPlayerInCutsceneMode(bool InCutsceneMode);
    void IPushCameraToStack(class AActor* NewViewTarget, float TimeToBlendIn, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool LockOutgoing);
    void IPopCameraFromStack(class AActor* ExistingViewTarget, float TimeToBlendOut, bool DeleteActorAfterBlend);
    void IPushManagedCameraToStack(class AActor* NewManagedCameraActor, FBP_CameraSettings CameraSettings, float TimeToBlendIn, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool LockOutgoing);
    void IGetDefaultCamera(class AActor*& Actor);
}; // Size: 0x28

#endif
