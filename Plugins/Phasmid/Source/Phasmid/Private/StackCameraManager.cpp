#include "StackCameraManager.h"

class AActor;

void AStackCameraManager::ShowCameraDebugInfo(bool bShowDebugInfo) {
}

bool AStackCameraManager::PopViewTargetWithBlendOverride(AActor* ExistingViewTarget, float TimeToBlendOut, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool bDeleteActorAfterBlend) {
    return false;
}

bool AStackCameraManager::PopViewTarget(AActor* ExistingViewTarget, float TimeToBlendOut, bool bDeleteActorAfterBlend, bool bUnlockViewTarget) {
    return false;
}

void AStackCameraManager::ClearStackToDefault() {
}

void AStackCameraManager::BP_PushViewTarget(AActor* NewViewTarget, FViewTargetTransitionParams TransitionParams) {
}

void AStackCameraManager::BP_PushManagedCamera(AActor* ManagedCamera, FCameraSettings Settings, FViewTargetTransitionParams TransitionParams) {
}

AStackCameraManager::AStackCameraManager() {
}

