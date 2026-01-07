#ifndef UE4SS_SDK_BP_CFS1160_FrilledLizards_HPP
#define UE4SS_SDK_BP_CFS1160_FrilledLizards_HPP

class ABP_CFS1160_FrilledLizards_C : public ABP_Base_Fodder_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Hiss_Out;                                 // 0x0B00 (size: 0x8)
    class UFalconEnemyStateComponent* State_Hiss_Loop;                                // 0x0B08 (size: 0x8)
    class UFalconEnemyStateComponent* State_Hiss_In;                                  // 0x0B10 (size: 0x8)
    class UFalconEnemyStateComponent* State_FlameDead;                                // 0x0B18 (size: 0x8)
    class UBP_ModelSwapComponent_C* BP_ModelSwapComponent;                            // 0x0B20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Burned;                        // 0x0B28 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__State_FodderRespawn_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_FlameDead_K2Node_ComponentBoundEvent_7_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Hiss_Loop_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Hiss_Loop_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CFS1160_FrilledLizards(int32 EntryPoint);
}; // Size: 0xB30

#endif
