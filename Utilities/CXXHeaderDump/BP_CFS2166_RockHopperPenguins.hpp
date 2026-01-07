#ifndef UE4SS_SDK_BP_CFS2166_RockHopperPenguins_HPP
#define UE4SS_SDK_BP_CFS2166_RockHopperPenguins_HPP

class ABP_CFS2166_RockHopperPenguins_C : public ABP_Base_Fodder_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Stare;                                    // 0x0B00 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__State_FodderWander_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FodderWander_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CFS2166_RockHopperPenguins(int32 EntryPoint);
}; // Size: 0xB08

#endif
