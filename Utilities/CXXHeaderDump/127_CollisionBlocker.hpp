#ifndef UE4SS_SDK_127_CollisionBlocker_HPP
#define UE4SS_SDK_127_CollisionBlocker_HPP

class A127_CollisionBlocker_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* State_Off;                                            // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_On;                                             // 0x0490 (size: 0x8)
    class UBoxComponent* CollisionBlocker;                                            // 0x0498 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__State_On_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Off_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_127_CollisionBlocker(int32 EntryPoint);
}; // Size: 0x4A0

#endif
