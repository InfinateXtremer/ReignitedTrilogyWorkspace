#ifndef UE4SS_SDK_CNS2134_PogoTheGemcutter_HPP
#define UE4SS_SDK_CNS2134_PogoTheGemcutter_HPP

class ACNS2134_PogoTheGemcutter_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0908 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_LightCone_Miner;                               // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleLogic;                     // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle2;                         // 0x0920 (size: 0x8)
    class UTextRenderComponent* TextRender_0;                                         // 0x0928 (size: 0x8)
    int32 IdleCount;                                                                  // 0x0930 (size: 0x4)

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
    void ExecuteUbergraph_CNS2134_PogoTheGemcutter(int32 EntryPoint);
}; // Size: 0x934

#endif
