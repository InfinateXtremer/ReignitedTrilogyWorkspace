#ifndef UE4SS_SDK_BP_LS201_FirstVisit_IGCController_HPP
#define UE4SS_SDK_BP_LS201_FirstVisit_IGCController_HPP

class ABP_LS201_FirstVisit_IGCController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* EloraIGCController;                                   // 0x0320 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm_NPC;              // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    class AIGC_Selector_C* IGC_ref;                                                   // 0x0338 (size: 0x8)
    int32 IGC_ID;                                                                     // 0x0340 (size: 0x4)
    class AActor* NPC_Ref;                                                            // 0x0348 (size: 0x8)
    bool HasSaveData;                                                                 // 0x0350 (size: 0x1)
    bool EloraTeleportCheck;                                                          // 0x0351 (size: 0x1)
    bool TeleportCheckState;                                                          // 0x0352 (size: 0x1)
    int32 IGC_ID_Teleport;                                                            // 0x0354 (size: 0x4)

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
    void PlayerReady();
    void EloraTeleportChecker();
    void ExecuteUbergraph_BP_LS201_FirstVisit_IGCController(int32 EntryPoint);
}; // Size: 0x358

#endif
