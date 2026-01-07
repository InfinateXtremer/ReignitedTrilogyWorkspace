#ifndef UE4SS_SDK_S2_RiptoDefeated_MoneybagsCheck_HPP
#define UE4SS_SDK_S2_RiptoDefeated_MoneybagsCheck_HPP

class AS2_RiptoDefeated_MoneybagsCheck_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0320 (size: 0x8)
    class UTextRenderComponent* Text;                                                 // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    bool SaveCheck;                                                                   // 0x0338 (size: 0x1)
    class ASpyro2_PortalArch_C* PortalArch;                                           // 0x0340 (size: 0x8)
    TArray<class AActor*> DestroyActors;                                              // 0x0348 (size: 0x10)
    TArray<class AActor*> NotifyActors;                                               // 0x0358 (size: 0x10)
    float NotifyDelay;                                                                // 0x0368 (size: 0x4)
    int32 NotifyValue;                                                                // 0x036C (size: 0x4)
    bool RiptoDefeated;                                                               // 0x0370 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void PlayerReady();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_S2_RiptoDefeated_MoneybagsCheck(int32 EntryPoint);
}; // Size: 0x371

#endif
