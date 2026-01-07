#ifndef UE4SS_SDK_BP_LS201_EloraLadderController_HPP
#define UE4SS_SDK_BP_LS201_EloraLadderController_HPP

class ABP_LS201_EloraLadderController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm_NPC;              // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class AIGC_Selector_C* IGC_ref;                                                   // 0x0330 (size: 0x8)
    int32 IGC_ID;                                                                     // 0x0338 (size: 0x4)
    class AActor* NPC_Ref;                                                            // 0x0340 (size: 0x8)
    class ABP_S2_Orb_Placed_C* Orb_Ref;                                               // 0x0348 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
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
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_LS201_EloraLadderController(int32 EntryPoint);
}; // Size: 0x350

#endif
