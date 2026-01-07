#ifndef UE4SS_SDK_BP_LS201_HunterCameraUtility_HPP
#define UE4SS_SDK_BP_LS201_HunterCameraUtility_HPP

class ABP_LS201_HunterCameraUtility_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class AIGC_Selector_C* IGC_ref;                                                   // 0x0328 (size: 0x8)

    bool GetChangedKeybindValue(FString Key, FKey& Value);
    bool RemoveChangedKeybindValue(FString Key);
    bool SetChangedKeybindValue(FString Key, FKey Value);
    bool getCheckpointDataForActorByName(FString ActorName, FPhasmidObjectSaveDataList& dataList);
    bool GetGlobalFloatValue(FString Key, float& Value);
    bool getSaveDataForActor(const class AActor* Actor, FString Level, FPhasmidObjectSaveDataList& dataList);
    bool getSaveDataForActorByName(FString ActorName, FString Level, FPhasmidObjectSaveDataList& dataList);
    bool SetGlobalFloatValue(FString Key, float Value);
    float PMCI_GetCurrentOffset();
    void SetOffset(float SetOffset, float Time, bool& Offset);
    void GetCurrentOffset(float& Offset);
    void ClearOffset(bool& Moved);
    void IGetDefaultCamera(class AActor*& Actor);
    void IGetFollowCameraComponent(class UFollowCameraComponent*& FollowCameraComponent);
    void UserConstructionScript();
    void objectStoreCheckpointDataByName(FString Name, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpoint);
    void objectStoreSerializedData(const class AActor* Actor, const FPhasmidObjectSaveDataList& dataList);
    void objectStoreSerializedDataByName(FString ObjectName, const FPhasmidObjectSaveDataList& dataList);
    void restoreObjectDataFromSave(const class AActor* Actor);
    void SetActiveGame(int32 gameIndex);
    void SetActiveSlot(int32 slotIndex);
    void PMCI_ApplyCameraSettings(FCameraSettings Settings);
    void PMCI_SetOffset(float Offset, float Time);
    void PCM_PopViewTarget(class AActor* ViewTarget, float BlendTime);
    void PCM_PushViewTarget(class AActor* ViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
    void IPushManagedCameraToStack(class AActor* NewManagedCameraActor, FBP_CameraSettings CameraSettings, float TimeToBlendIn, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool LockOutgoing);
    void IPopCameraFromStack(class AActor* ExistingViewTarget, float TimeToBlendOut, bool DeleteActorAfterBlend);
    void IPushCameraToStack(class AActor* NewViewTarget, float TimeToBlendIn, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool LockOutgoing);
    void INotifyPlayerInCutsceneMode(bool InCutsceneMode);
    void IShowCameraDebugInfo(bool ShowDebugInfo);
    void ISnapDefaultCameraBehindPlayer();
    void IPopCameraFromStackBlendOverride(class AActor* ExistingViewTarget, float TimeToBlendOut, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool DeleteActorAfterBlend);
    void IUpdateActiveCamera(bool IsActive);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void objectStoreCheckpointData(const class AActor* Actor, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpoint);
    void objectSaveDataUpdated(const class AActor* Actor);
    void DeleteSave();
    void LS201 Hunter - Camera IGC Control();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_LS201_HunterCameraUtility(int32 EntryPoint);
}; // Size: 0x330

#endif
