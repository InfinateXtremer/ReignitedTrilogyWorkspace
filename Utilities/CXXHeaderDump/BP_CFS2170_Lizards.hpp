#ifndef UE4SS_SDK_BP_CFS2170_Lizards_HPP
#define UE4SS_SDK_BP_CFS2170_Lizards_HPP

class ABP_CFS2170_Lizards_C : public ABP_Base_Fodder_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Near_Out;                                 // 0x0B00 (size: 0x8)
    class UFalconEnemyStateComponent* State_Near_Loop;                                // 0x0B08 (size: 0x8)
    class UFalconEnemyStateComponent* State_Near_In;                                  // 0x0B10 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__State_Near_Loop_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Near_In_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CFS2170_Lizards(int32 EntryPoint);
}; // Size: 0xB18

#endif
