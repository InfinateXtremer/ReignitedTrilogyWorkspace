#ifndef UE4SS_SDK_BP_LS115_SkillPoint_Painting_HPP
#define UE4SS_SDK_BP_LS115_SkillPoint_Painting_HPP

class ABP_LS115_SkillPoint_Painting_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBP_StateComponent_C* State_Burned;                                         // 0x0450 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0458 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__State_Burned_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_LS115_SkillPoint_Painting(int32 EntryPoint);
}; // Size: 0x460

#endif
