#ifndef UE4SS_SDK_CNS2160_ZappTheElectroll_HPP
#define UE4SS_SDK_CNS2160_ZappTheElectroll_HPP

class ACNS2160_ZappTheElectroll_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Electroll_Antennae;                        // 0x0908 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Electroll_Glasses;                         // 0x0910 (size: 0x8)
    bool starterZapp?;                                                                // 0x0918 (size: 0x1)
    class AIGC_Selector_C* IGCRef;                                                    // 0x0920 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__State_Move_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_CNS2160_ZappTheElectroll(int32 EntryPoint);
}; // Size: 0x928

#endif
