#ifndef UE4SS_SDK_BP_CES2021_Duck_HPP
#define UE4SS_SDK_BP_CES2021_Duck_HPP

class ABP_CES2021_Duck_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UParticleSystemComponent* ShovelShock;                                      // 0x09F8 (size: 0x8)
    class UParticleSystemComponent* Shock;                                            // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* ThrowHelmet;                                          // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOUT;                      // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertLoop;                     // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertIn;                       // 0x0A20 (size: 0x8)
    class UStaticMeshComponent* Shovel;                                               // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TakeHit;                       // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Zapped;                        // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt;                         // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryAlert;                 // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move;                          // 0x0A68 (size: 0x8)
    FVector Dissolve_FadeToBlack_92F8EB2B4020982ED598C89F3E4B92E5;                    // 0x0A70 (size: 0xC)
    float Dissolve_Fringe_Intensity_92F8EB2B4020982ED598C89F3E4B92E5;                 // 0x0A7C (size: 0x4)
    float Dissolve_Fringe_Size_92F8EB2B4020982ED598C89F3E4B92E5;                      // 0x0A80 (size: 0x4)
    float Dissolve_Dissolve_Amount_92F8EB2B4020982ED598C89F3E4B92E5;                  // 0x0A84 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Dissolve__Direction_92F8EB2B4020982ED598C89F3E4B92E5; // 0x0A88 (size: 0x1)
    class UTimelineComponent* Dissolve;                                               // 0x0A90 (size: 0x8)
    float Innertube_Dissolve_Alpha_1FAAB4E44F0CCE7F7AEFF78F8C259506;                  // 0x0A98 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Innertube_Dissolve__Direction_1FAAB4E44F0CCE7F7AEFF78F8C259506; // 0x0A9C (size: 0x1)
    class UTimelineComponent* Innertube Dissolve;                                     // 0x0AA0 (size: 0x8)
    bool GuardBroken;                                                                 // 0x0AA8 (size: 0x1)
    class UMaterialInstanceDynamic* Innertube Instance;                               // 0x0AB0 (size: 0x8)
    bool IsSliding;                                                                   // 0x0AB8 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Innertube Dissolve__FinishedFunc();
    void Innertube Dissolve__UpdateFunc();
    void Dissolve__FinishedFunc();
    void Dissolve__UpdateFunc();
    void FrictionOn();
    void FrictionOff();
    void BndEvt__FalconEnemyState_TakeHit_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Fling Helmet();
    void Duck Death Dissolve();
    void BndEvt__FalconEnemyState_TakeHit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void Disable Turning();
    void Enable Turning();
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Zapped_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void PlayShock();
    void ExecuteUbergraph_BP_CES2021_Duck(int32 EntryPoint);
}; // Size: 0xAB9

#endif
