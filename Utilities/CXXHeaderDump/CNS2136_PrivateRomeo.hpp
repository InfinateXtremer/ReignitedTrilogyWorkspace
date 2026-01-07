#ifndef UE4SS_SDK_CNS2136_PrivateRomeo_HPP
#define UE4SS_SDK_CNS2136_PrivateRomeo_HPP

class ACNS2136_PrivateRomeo_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class AIGC_Selector_C* IGCRef;                                                    // 0x0908 (size: 0x8)

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
    void ExecuteUbergraph_CNS2136_PrivateRomeo(int32 EntryPoint);
}; // Size: 0x910

#endif
