#ifndef UE4SS_SDK_CNS2137_QueenFinny_HPP
#define UE4SS_SDK_CNS2137_QueenFinny_HPP

class ACNS2137_QueenFinny_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class AActor* MySelector;                                                         // 0x0908 (size: 0x8)
    class AActor* MissionMaster;                                                      // 0x0910 (size: 0x8)
    bool Active;                                                                      // 0x0918 (size: 0x1)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ExecuteUbergraph_CNS2137_QueenFinny(int32 EntryPoint);
}; // Size: 0x919

#endif
