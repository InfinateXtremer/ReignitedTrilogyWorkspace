#ifndef UE4SS_SDK_SM_LS204_YetiBuilding_Window_TFB_Blueprint_HPP
#define UE4SS_SDK_SM_LS204_YetiBuilding_Window_TFB_Blueprint_HPP

class ASM_LS204_YetiBuilding_Window_TFB_Blueprint_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0330 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Yeti_Window;                               // 0x0338 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0340 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0348 (size: 0x8)
    class UDestructibleComponent* SM_LS204_YetiBuilding_Window_TFB_DM;                // 0x0350 (size: 0x8)

    void UserConstructionScript();
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_SM_LS204_YetiBuilding_Window_TFB_Blueprint(int32 EntryPoint);
}; // Size: 0x358

#endif
