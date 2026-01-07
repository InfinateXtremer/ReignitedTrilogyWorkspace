#ifndef UE4SS_SDK_BP_CFS1158_Chickens_HPP
#define UE4SS_SDK_BP_CFS1158_Chickens_HPP

class ABP_CFS1158_Chickens_C : public ABP_Base_Fodder_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FakeLaunch;                    // 0x0B00 (size: 0x8)
    class UFalconEnemyStateComponent* State_Squawk;                                   // 0x0B08 (size: 0x8)
    class ABP_219_Achievement_C* AchievementWatcher;                                  // 0x0B10 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__State_DeathFlop_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FodderWander_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_FodderWander_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CFS1158_Chickens(int32 EntryPoint);
}; // Size: 0xB18

#endif
