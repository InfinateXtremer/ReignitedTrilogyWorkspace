#ifndef UE4SS_SDK_CNS2135_PrinceTortiss_HPP
#define UE4SS_SDK_CNS2135_PrinceTortiss_HPP

class ACNS2135_PrinceTortiss_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UParticleSystemComponent* PS_KingTortiss_Crown_Hover;                       // 0x0908 (size: 0x8)
    class UParticleSystemComponent* PS_KingFromit_Hover;                              // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wander_02;                     // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState: Move_01;                      // 0x0920 (size: 0x8)
    class UTextRenderComponent* TextRender_0;                                         // 0x0928 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wander_01;                     // 0x0930 (size: 0x8)

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
    void ExecuteUbergraph_CNS2135_PrinceTortiss(int32 EntryPoint);
}; // Size: 0x938

#endif
