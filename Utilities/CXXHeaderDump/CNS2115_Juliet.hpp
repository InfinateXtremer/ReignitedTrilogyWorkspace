#ifndef UE4SS_SDK_CNS2115_Juliet_HPP
#define UE4SS_SDK_CNS2115_Juliet_HPP

class ACNS2115_Juliet_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0908 (size: 0x8)
    class AActor* endPoint;                                                           // 0x0910 (size: 0x8)
    class AIGC_Selector_C* IGCRef;                                                    // 0x0918 (size: 0x8)
    class AActor* SeedControllerRef;                                                  // 0x0920 (size: 0x8)
    class AActor* RomeoRef;                                                           // 0x0928 (size: 0x8)

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
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_CNS2115_Juliet(int32 EntryPoint);
}; // Size: 0x930

#endif
