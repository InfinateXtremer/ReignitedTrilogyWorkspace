#ifndef UE4SS_SDK_GlobalTransporter_HPP
#define UE4SS_SDK_GlobalTransporter_HPP

class AGlobalTransporter_C : public ATransportManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    class UPhasmidWorldEventListenerComponent* PhasmidWorldEventListener;             // 0x0430 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0438 (size: 0x8)
    FGlobalTransporter_CLevelLoadState LevelLoadState;                                // 0x0440 (size: 0x10)
    FGlobalTransporter_CTransportVisibilityDispatcher TransportVisibilityDispatcher;  // 0x0450 (size: 0x10)
    FGlobalTransporter_CInFlyingTransition InFlyingTransition;                        // 0x0460 (size: 0x10)

    void SetLightingToIncomingLevel(class APortal* Outgoing Portal, class APortal* Incoming Portal, bool Delay);
    void RecaptureLighting();
    void ConvertStreamData(FLevelStreamingRecord InputStreamData, FName& Path, TArray<FName>& sublevelNames, TEnumAsByte<ELevelTransportType>& transportType, TEnumAsByte<ELevelRecordType>& recordType);
    void FadeLightingToIncomingLevel(float BlendTime, class APortal* OutgoingPortal, class APortal* IncomingPortal);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void SetCurrentLevelVisibility(bool visible);
    void UnloadTransitionLighting(FMasterLevelData LoadLevels);
    void PreloadTransitionLighting(FMasterLevelData LoadLevels);
    void QueueStream(FLevelStreamingRecord StreamRecord, TEnumAsByte<ELevelTransportType> transportType, TEnumAsByte<ELevelRecordType> recordType);
    void ReceiveTick(float DeltaSeconds);
    void OnLevelActivated(FName LevelName);
    void OnEventLevelRemovedFromWorld(FString LevelName);
    void OnLevelDeactivated(FName LevelName);
    void StartAtLevelCheckpoint(FDataTableRowHandle Start Level, bool isRestart, TEnumAsByte<ELevelTransitionType::Type> TransitionType, FString Checkpoint);
    void OnEventLevelAddedToWorld(FString LevelName);
    void TurnLightingManagerOff();
    void TurnLightingManagerOn();
    void ExecuteUbergraph_GlobalTransporter(int32 EntryPoint);
    void InFlyingTransition__DelegateSignature(bool IsInFlyingTransition, class ALightingManager_C* IncomingLightingManager);
    void TransportVisibilityDispatcher__DelegateSignature(bool visible, TArray<FName>& LevelName);
    void LevelLoadState__DelegateSignature(TEnumAsByte<ELoadState::Type> LoadState, FString LevelPath);
}; // Size: 0x470

#endif
