#ifndef UE4SS_SDK_105_Barrel_HPP
#define UE4SS_SDK_105_Barrel_HPP

class A105_Barrel_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* State_Hit;                                            // 0x0488 (size: 0x8)
    class A105_Barrel_C* Barrel_Pair;                                                 // 0x0490 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__State: Death_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void StateWatch(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_105_Barrel(int32 EntryPoint);
}; // Size: 0x498

#endif
