#ifndef UE4SS_SDK_BP_LS102_TulipSkillPoint_HPP
#define UE4SS_SDK_BP_LS102_TulipSkillPoint_HPP

class ABP_LS102_TulipSkillPoint_C : public ABP_SK_SH_flower_Tulip_LevelActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__FalconEnemyState_FireHit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_LS102_TulipSkillPoint(int32 EntryPoint);
}; // Size: 0x498

#endif
