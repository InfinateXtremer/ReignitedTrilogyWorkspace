#ifndef UE4SS_SDK_BP_CES1064_GnorcAdier_HPP
#define UE4SS_SDK_BP_CES1064_GnorcAdier_HPP

class ABP_CES1064_GnorcAdier_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UParticleSystemComponent* PS_GnorcAdier_Fuse_Ignite;                        // 0x09F8 (size: 0x8)
    class UParticleSystemComponent* PS_GnorcAdier_Fuse_Loop;                          // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_StartAlert;                    // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOUT;                      // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertLoop;                     // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertIn;                       // 0x0A20 (size: 0x8)
    class UStaticMeshComponent* Shield;                                               // 0x0A28 (size: 0x8)
    class UStaticMeshComponent* Bomb;                                                 // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move;                          // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Chase;                         // 0x0A58 (size: 0x8)
    class ATriggerBox* Trigger;                                                       // 0x0A60 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void Hide Bomb();
    void Show Bomb();
    void Light Fuse();
    void Extinguish Fuse();
    void BndEvt__FalconEnemyState_StartAlert_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Chase_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Play Running Scream();
    void BndEvt__FalconEnemyState_Chase_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Move_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void Stop Running Scream();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1064_GnorcAdier(int32 EntryPoint);
}; // Size: 0xA68

#endif
