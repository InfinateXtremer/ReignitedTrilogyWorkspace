#ifndef UE4SS_SDK_BP_CES1060_Cupid_HPP
#define UE4SS_SDK_BP_CES1060_Cupid_HPP

class ABP_CES1060_Cupid_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdle;                  // 0x09F8 (size: 0x8)
    class UPointLightComponent* Arrow_PointLight;                                     // 0x0A00 (size: 0x8)
    class UPointLightComponent* Head_PointLight;                                      // 0x0A08 (size: 0x8)
    class UParticleSystemComponent* FireHairVFX;                                      // 0x0A10 (size: 0x8)
    class UParticleSystemComponent* FireArrowVFX;                                     // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle2;                         // 0x0A20 (size: 0x8)
    class UStaticMeshComponent* ArrowMesh;                                            // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A40 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void ShowArrowFire();
    void ShowArrow();
    void HideArrowFire();
    void HideArrow();
    void ExecuteUbergraph_BP_CES1060_Cupid(int32 EntryPoint);
}; // Size: 0xA48

#endif
