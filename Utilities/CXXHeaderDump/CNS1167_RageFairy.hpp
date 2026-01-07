#ifndef UE4SS_SDK_CNS1167_RageFairy_HPP
#define UE4SS_SDK_CNS1167_RageFairy_HPP

class ACNS1167_RageFairy_C : public ASaveFairy_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0940 (size: 0x8)
    class UFalconEnemyStateComponent* State_Idle;                                     // 0x0948 (size: 0x8)
    TSubclassOf<class AActor> FairyBulletClass;                                       // 0x0950 (size: 0x8)
    class UParticleSystem* VFX_UniqueFairyFX;                                         // 0x0958 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__State_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Alert_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Zap_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_CNS1167_RageFairy(int32 EntryPoint);
}; // Size: 0x960

#endif
