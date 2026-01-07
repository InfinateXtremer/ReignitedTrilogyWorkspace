#ifndef UE4SS_SDK_BP_TreasureChest_1-Up_HPP
#define UE4SS_SDK_BP_TreasureChest_1-Up_HPP

class ABP_TreasureChest_1-Up_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0628 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void ExecuteUbergraph_BP_TreasureChest_1-Up(int32 EntryPoint);
}; // Size: 0x630

#endif
