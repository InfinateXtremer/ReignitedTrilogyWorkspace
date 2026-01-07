#ifndef UE4SS_SDK_BP_CFS2162_Ladybug_HPP
#define UE4SS_SDK_BP_CFS2162_Ladybug_HPP

class ABP_CFS2162_Ladybug_C : public ABP_Base_Fodder_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* State_GroundReact;                              // 0x0B00 (size: 0x8)
    class UFalconEnemyStateComponent* State_BarrelRoll;                               // 0x0B08 (size: 0x8)
    class UFalconEnemyStateComponent* State_TakeOff;                                  // 0x0B10 (size: 0x8)
    class UFalconEnemyStateComponent* State_Landing;                                  // 0x0B18 (size: 0x8)
    class UFalconEnemyStateComponent* State_Flying;                                   // 0x0B20 (size: 0x8)

    void UserConstructionScript();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void SetIdleStartOffset(float OffsetPercent);
    void BndEvt__State_FodderWander_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FodderWander_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Flying_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Flying_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CFS2162_Ladybug(int32 EntryPoint);
}; // Size: 0xB28

#endif
