#ifndef UE4SS_SDK_BP_211_Section1_Controller_HPP
#define UE4SS_SDK_BP_211_Section1_Controller_HPP

class ABP_211_Section1_Controller_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0450 (size: 0x8)
    int32 StateIndex;                                                                 // 0x0458 (size: 0x4)
    TArray<class ABP_211_Eskimo_BASE_C*> NPCsToWatch;                                 // 0x0460 (size: 0x10)
    TArray<class ABP_211_Eskimo_BASE_C*> FrozenNPCs;                                  // 0x0470 (size: 0x10)
    class ABP_BoneSeeSaw_C* BoneRef;                                                  // 0x0480 (size: 0x8)
    int32 readyCount;                                                                 // 0x0488 (size: 0x4)
    class ATfbLevelSequenceActor* seqRef;                                             // 0x0490 (size: 0x8)
    FPhasmidSoftReference seqRef_soft;                                                // 0x0498 (size: 0x28)
    class AActor* seqIGCref;                                                          // 0x04C0 (size: 0x8)
    class ABP_BoneSeeSaw_C* seesawRef;                                                // 0x04C8 (size: 0x8)
    class ABP_BoneSeeSaw_C* NewVar_0;                                                 // 0x04D0 (size: 0x8)
    bool doProximityCheck?;                                                           // 0x04D8 (size: 0x1)
    bool isIGCincoming?;                                                              // 0x04D9 (size: 0x1)
    class AActor* incomingIGCSelector;                                                // 0x04E0 (size: 0x8)
    class ABP_211_Eskimo_BASE_C* justUnfrozenRef;                                     // 0x04E8 (size: 0x8)

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
    void ReceiveTick(float DeltaSeconds);
    void MissionAlert(class AActor* Actor, int32 Value);
    void LS211 Section 1 - Player Ready();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_211_Section1_Controller(int32 EntryPoint);
}; // Size: 0x4F0

#endif
