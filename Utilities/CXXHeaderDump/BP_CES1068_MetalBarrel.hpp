#ifndef UE4SS_SDK_BP_CES1068_MetalBarrel_HPP
#define UE4SS_SDK_BP_CES1068_MetalBarrel_HPP

class ABP_CES1068_MetalBarrel_C : public ABP_Barrel_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0598 (size: 0x8)
    class UBP_StateComponent_C* State_Default2;                                       // 0x05A0 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x05A8 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__FalconLevelActorState_Boom_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconLevelActorState_Launch_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconLevelActorState_Rolling_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconLevelActorState_Rolling_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1068_MetalBarrel(int32 EntryPoint);
}; // Size: 0x5B0

#endif
