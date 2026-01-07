#ifndef UE4SS_SDK_BP_211_Section2_Controller_HPP
#define UE4SS_SDK_BP_211_Section2_Controller_HPP

class ABP_211_Section2_Controller_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0450 (size: 0x8)
    TArray<class ABP_Base_Enemy_C*> EnemiesToCheck;                                   // 0x0458 (size: 0x10)
    TArray<class ABP_211_Eskimo_BASE_C*> NPCsToCheck;                                 // 0x0468 (size: 0x10)
    int32 SuccessCount;                                                               // 0x0478 (size: 0x4)
    TArray<class AActor*> Selectors;                                                  // 0x0480 (size: 0x10)
    class AActor* End_SelectorRef;                                                    // 0x0490 (size: 0x8)
    bool isDone;                                                                      // 0x0498 (size: 0x1)
    class AActor* closestSelector;                                                    // 0x04A0 (size: 0x8)
    int32 frozenCount;                                                                // 0x04A8 (size: 0x4)

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
    void ReceiveTick(float DeltaSeconds);
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_211_Section2_Controller(int32 EntryPoint);
}; // Size: 0x4AC

#endif
