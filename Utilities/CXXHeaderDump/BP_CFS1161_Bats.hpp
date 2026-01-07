#ifndef UE4SS_SDK_BP_CFS1161_Bats_HPP
#define UE4SS_SDK_BP_CFS1161_Bats_HPP

class ABP_CFS1161_Bats_C : public ABP_Base_Fodder_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* State_SeekSpyro;                                // 0x0B00 (size: 0x8)
    class UFalconEnemyStateComponent* State_Return;                                   // 0x0B08 (size: 0x8)
    class AActor* Spline;                                                             // 0x0B10 (size: 0x8)

    class ULevel* GetCurrentLevelForSaveData(FString& LevelName);
    bool InCutscene();
    void UserConstructionScript();
    void AwardLifeFromSkillPoint();
    void OnCutsceneBegin();
    void OnCutsceneEnd();
    void SetEnableLoadScreen(bool Enable, float fadeTime);
    void BndEvt__State_Return_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FodderWander_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FodderWander_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_SeekSpyro_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_DeathFlop_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_DeathFlop_K2Node_ComponentBoundEvent_5_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CFS1161_Bats(int32 EntryPoint);
}; // Size: 0xB18

#endif
