#ifndef UE4SS_SDK_CameraManagerComponent_HPP
#define UE4SS_SDK_CameraManagerComponent_HPP

class UCameraManagerComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    TArray<FBP_CameraContext> CameraContextStack;                                     // 0x00F8 (size: 0x10)
    bool StackDirty;                                                                  // 0x0108 (size: 0x1)
    float OutgoingBlendTime;                                                          // 0x010C (size: 0x4)
    TArray<FBP_CameraContext> PendingDeleteContexts;                                  // 0x0110 (size: 0x10)
    class AActor* Owner;                                                              // 0x0120 (size: 0x8)
    class APlayerController* PlayerController;                                        // 0x0128 (size: 0x8)
    class AActor* DefaultPlayerCamera;                                                // 0x0130 (size: 0x8)
    bool ShowDebugInfo;                                                               // 0x0138 (size: 0x1)
    bool MatchCharacterZ;                                                             // 0x0139 (size: 0x1)
    TEnumAsByte<EViewTargetBlendFunction> OutgoingBlendFunction;                      // 0x013A (size: 0x1)
    float OutgoingBlendExponent;                                                      // 0x013C (size: 0x4)
    bool UseOutgoing;                                                                 // 0x0140 (size: 0x1)
    class AStackCameraManager* StackCameraManager;                                    // 0x0148 (size: 0x8)

    void GetBlendSettings(float TimeToBlendIn, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, float& TimeToBlendInOut, TEnumAsByte<EViewTargetBlendFunction>& BlendFunctionOut, float& BlendExponentOut);
    void SetCameraLocation(class AActor* CameraActor, FVector NewLocation, bool UseOffset, float OffsetLagTime);
    void TraceForCameraLocation(class AActor* CameraActor, class APawn* Owner, float& ZResult_);
    void PrintDebugInfoToScreen(bool ShowDebugInfo);
    void CameraActorIsValid(class AActor* CameraActor, bool& Valid);
    void UpdateWithOwnerPositionAndRotation(class AActor* CameraActor);
    void MakeAngle_-180_to_180(float InputAngle, float& OutputAngle);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void PushManagedCameraToStack(class AActor* NewCameraActor, FBP_CameraSettings NewCameraSettings, float TimeToBlendIn, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool LockOutgoing);
    void PopCameraFromStack(class AActor* ExistingCameraActor, float TimeToBlendOut, bool DeleteActorAfterBlend);
    void InvalidateStack(float TimeToBlendOut);
    void EvaluateCameraStack();
    void SetOwnerAndController();
    void ExecutePendingDeletes();
    void PushCameraToStack(class AActor* NewViewTarget, float TimeToBlendIn, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool LockOutgoing);
    void ClearCameraStackToDefault();
    void ShowCameraDebugInfo(bool ShowDebugInfo);
    void PopCameraFromStackBlendOverride(class AActor* ExistingCameraActor, float TimeToBlendOut, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool DeleteActorAfterBlend);
    void ExecuteUbergraph_CameraManagerComponent(int32 EntryPoint);
}; // Size: 0x150

#endif
