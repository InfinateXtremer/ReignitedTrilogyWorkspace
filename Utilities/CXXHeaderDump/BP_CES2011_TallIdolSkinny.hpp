#ifndef UE4SS_SDK_BP_CES2011_TallIdolSkinny_HPP
#define UE4SS_SDK_BP_CES2011_TallIdolSkinny_HPP

class ABP_CES2011_TallIdolSkinny_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class USkeletalMeshComponent* NPCProp;                                            // 0x09F8 (size: 0x8)
    class UParticleSystemComponent* WeenieSteam;                                      // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* Weapon;                                               // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PostAttack;                    // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Ranged;                        // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack;                     // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A38 (size: 0x8)
    class ACNS2192_GreenColosi_C* myNPC;                                              // 0x0A40 (size: 0x8)
    bool isNPCHeld?;                                                                  // 0x0A48 (size: 0x1)
    FTransform originalNPCTransform;                                                  // 0x0A50 (size: 0x30)
    bool doLaunchCollisionAdjust?;                                                    // 0x0A80 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES2011_TallIdolSkinny(int32 EntryPoint);
}; // Size: 0xA81

#endif
