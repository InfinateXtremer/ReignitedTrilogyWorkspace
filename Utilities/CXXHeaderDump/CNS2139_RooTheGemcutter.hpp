#ifndef UE4SS_SDK_CNS2139_RooTheGemcutter_HPP
#define UE4SS_SDK_CNS2139_RooTheGemcutter_HPP

class ACNS2139_RooTheGemcutter_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0908 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_LightCone_Miner;                               // 0x0910 (size: 0x8)
    class UTextRenderComponent* TextRender_0;                                         // 0x0918 (size: 0x8)
    class AActor* Boulder;                                                            // 0x0920 (size: 0x8)
    class AActor* Boulder IGC;                                                        // 0x0928 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CNS2139_RooTheGemcutter(int32 EntryPoint);
}; // Size: 0x930

#endif
