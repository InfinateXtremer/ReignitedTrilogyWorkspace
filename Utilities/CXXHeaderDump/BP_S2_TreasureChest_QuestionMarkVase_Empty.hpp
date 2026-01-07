#ifndef UE4SS_SDK_BP_S2_TreasureChest_QuestionMarkVase_Empty_HPP
#define UE4SS_SDK_BP_S2_TreasureChest_QuestionMarkVase_Empty_HPP

class ABP_S2_TreasureChest_QuestionMarkVase_Empty_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    bool isRevealed?;                                                                 // 0x0628 (size: 0x1)

    bool ForceHasGem(bool& bHasGem);
    void UserConstructionScript();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_S2_TreasureChest_QuestionMarkVase_Empty(int32 EntryPoint);
}; // Size: 0x629

#endif
