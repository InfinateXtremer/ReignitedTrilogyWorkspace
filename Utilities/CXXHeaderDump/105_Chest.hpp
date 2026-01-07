#ifndef UE4SS_SDK_105_Chest_HPP
#define UE4SS_SDK_105_Chest_HPP

class A105_Chest_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UParticleSystemComponent* Twinkles;                                         // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_Death2;                                         // 0x0490 (size: 0x8)
    class UParticleSystemComponent* TwinkleParticle;                                  // 0x0498 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__State_Death2_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_105_Chest(int32 EntryPoint);
}; // Size: 0x4A0

#endif
